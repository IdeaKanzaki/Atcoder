#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    long long n,a,b,x;
    cin >> n;
    float rn = sqrt(n);
    int ans = 10;
    for (int i=1; i<=rn; i++) {
        a = i;
        if (n % a == 0) {
            b = n / a;
            x = max(a, b);
            int dig = 0;
            while (x > 0) {
                x = x / 10;
                dig++;
            }
            ans = min(ans, dig);
        }
    }
    cout << ans << endl;
    return 0;
}