#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    /* 最初のボールの塗り方はk通り、次のボールの塗り方は最初のボールを塗った色を抜いた
    k-1通りその次はまたk-1と続いていくのでk(k-1)^(n-1)通りを求めればいい */
    long long ans = k;
    for (int i=1; i<n; i++) {
        ans *= (k - 1);
    }
    cout << ans << endl;
    return 0;
}