#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 3) {
        cout << 0 << endl;
        return 0;
    }

    int l[101];
    for (int i=0; i<n; i++) cin >> l[i];
    int ans = 0;
    sort(l, l+n);
    for (int i = 0; i < n-2; i++) {
        for (int j = i+1; j < n-1; j++) {
            if (l[i] == l[j]) continue;
            for (int k = j+1; k < n; k++) {
                if (l[j] == l[k]) continue;
                if (l[i] + l[j] > l[k]) ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}