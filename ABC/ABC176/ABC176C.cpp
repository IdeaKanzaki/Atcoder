
//C++ template-------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
//define-------------------------------------------------------
#define rep(i, n) for (int i = 0; i < (int)(n); i++) //指定回数ループマクロ
#define reps(i, n) for (int i = 1; i < (int)(n); i++) //1-origin
#define rrep(i, n) for (int i = ((int)(n)-1); i>=0; i--) //逆順
#define rreps(i, n) for (int i= ((int)(n)); i>0; i--) //逆順1-origin
#define all(x) (x).begin(), (x).end() //先頭と末尾のイテレータを渡す
#define sz(x) ((int)(x).size()) //size()のunsignedを回避
#define pb push_back
#define mp make_pair
//typedef------------------------------------------------------
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
//const--------------------------------------------------------
const ll MOD = 1000000007;
const int INF = 1e9;
const double PI = acos(-1.0); //3.141592....
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
//main---------------------------------------------------------
int main() {
    int n;
    ll a[200010];
    cin >> n; //入力
    ll fronTall = 0;
    ll sum = 0;
    rep(i, n) { 
        cin >> a[i]; //n数の入力
        if (fronTall > a[i]) {
            sum = sum + fronTall - a[i];
        }else {
            fronTall = a[i];
        }
    }
    cout << sum << endl; //出力
    return 0; //終了
}