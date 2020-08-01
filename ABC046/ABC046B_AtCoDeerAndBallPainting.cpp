#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k; //ansが結構大きくなるのでそれに合わせてlong longで対応
    cin >> n >> k; //nとkの入力
    /* 最初のボールの塗り方はk通り、次のボールの塗り方は最初のボールを塗った色を抜いた
    k-1通りその次はまたk-1と続いていくのでk(k-1)^(n-1)通りを求めればいい */
    long long ans = k;
    for (int i=1; i<n; i++) { //iを1からn-1まで増やしていく（n-1回ループしたいだけ）
        ans *= (k - 1); //n-1回(k-1)をかける
    }
    cout << ans << endl; //ansを出力
    return 0;
}