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
#define sqrt(x) sqrt(abs(x)) //sqrtの絶対値の記入の省略
//typedef------------------------------------------------------
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;

//main---------------------------------------------------------
int main() {
    string s; //使う数の型を決めておくぜ
    cin >> s; //入力
    int n = s.size();
    int ans = 0; //何個あるのかのカウント
    rep(i, n) { 
        ans = (ans + s[i] - '0') % 9;
    }
    if (ans == 0) cout << "Yes" << endl;
    else cout << "No" << endl; //カウントを出力
    return 0; //終了
}