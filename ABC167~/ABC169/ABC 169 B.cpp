#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long a[100010];
    cin >> n;
    long long ans = 1;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    long long max = 1e18;
    for (int i=0; i<n; i++) {
        if (a[i]==0) {
            cout << 0 << endl;
            return 0;
        }
        else if (ans > max / a[i]) {
            cout << -1 << endl;
            return 0;
        }
        ans *= a[i];
    }
    cout << ans << endl;
    return 0;
}