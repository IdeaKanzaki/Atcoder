#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {
    //入力
    int n;
    int a[101];
    cin >> n;
    rep(i,n) cin >> a[i];
    int ans = 0;
    for (int i=0; i < n; i += 2) {
        if (a[i] % 2 == 1) ans++;
    }
    cout << ans << endl;
    return 0;
}