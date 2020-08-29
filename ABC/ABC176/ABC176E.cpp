//C++ template-------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
//define-------------------------------------------------------
#define rep(i, n) for (int i = 0; i < (int)(n); i++) //指定回数ループマクロ
#define reps(i, n) for (int i = 1; i < (int)(n); i++) //1-origin
#define rrep(i, n) for (int i = ((int)(n)-1); i>=0; i--) //逆順
#define rreps(i, n) for (int i= ((int)(n)); i>0; i--) //逆順1-origin
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
//macro--------------------------------------------------------
//aのb乗のmod100000007を求める
ll powmod(ll a, ll b) {ll res=1; a %= MOD; for(;b;b>>=1) { if (b & 1) {res = res * a % MOD; a = a * a % MOD;} return res; }}

//最大公約数を求める
int gcd(int a, int b) { if (a%b == 0) return b; else return gcd(b, a%b);}

//最小公倍数を求める
int lcm(int a, int b) { return a * b / gcd(a, b); }
//main---------------------------------------------------------
int main() {
    int h, w, n; 
    cin >> n >> w >> n;
    vector<int> hs(h), ws(h);
    set<pii> s;
    rep(i,n) {
        int r, c;
        cin >> r >> c;
        --r; --c;
        hs[r]++;
        ws[c]++;
        s.emplace(r,c);
    }
    int mh = 0, mw = 0;
    rep(i,h) mh = max(mh, hs[i]);
    rep(j,w) mw = max(mw, ws[j]);
    vector<int> is, js;
    rep(i,h) if (mh == hs[i]) is.push_back(i);
    rep(j,w) if (mw == ws[j]) js.push_back(j);
    int ans = mh + mw;
    for (int i : is) for (int j : js) {
        if (s.count(pii(i,j))) continue;
        cout << ans << endl;
        return 0;
    }
    --ans;
    cout << ans << endl;
    return 0;
}