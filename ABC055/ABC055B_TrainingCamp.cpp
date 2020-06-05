#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long ans = 1;
    //mod1000000007、計算ごとに割っても結果は同じ
    for (int i=1; i<=n; i++) {
        ans = (ans * i) % 1000000007;
    }
    cout << ans << endl;
    return 0;
}