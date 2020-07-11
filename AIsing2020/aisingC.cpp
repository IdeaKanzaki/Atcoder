#include <bits/stdc++.h>
#define rep(i,n) for (double i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;

int main() {
    //入力
    double n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int ans = 0;
        // x
        rep(x,n) {
            // y
            if (x*x + x + 4 > i) break;
            rep(y, n) {
                if (x*x + y*y + x*y + x + y + 1 > i) break;
                else if ((double)i -3*(x*x+y*y)/4 - x*y/2 <= 0) break;
                // z
                double z = - (x + y)/2 + sqrt((double)i -3*(x*x+y*y)/4 - x*y/2);
                if (z == (int)z) ans++;
            }
        }
        cout << ans << endl;
    } 
    return 0;
}