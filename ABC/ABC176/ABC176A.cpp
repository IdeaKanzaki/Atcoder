//C++ template-------------------------------------------------
#include <bits/stdc++.h>
using namespace std;

//main---------------------------------------------------------
int main() {
    int n, x, t, ans; //使う数の型を決めておくぜ
    cin >> n >> x >> t; //入力
    if (n % x == 0) ans = n / x * t;
    else ans = ( (n / x) + 1 ) * t;    
    cout << ans << endl; //カウントを出力
    return 0; //終了
}