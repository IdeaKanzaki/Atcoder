#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int w, h, n;
    cin >> w >> h >> n;
    int x[101],y[101],a[101];
    int xma = 0;
    int yma = 0;
    int xmi = w;
    int ymi = h;
    for (int i=1; i<=n; i++) {
        cin >> x[i] >> y[i] >> a[i];
        if (a[i] == 1) xma = max(x[i], xma);
        else if (a[i] == 2) xmi = min(x[i], xmi);
        else if (a[i] == 3) yma = max(y[i], yma);
        else if (a[i] == 4) ymi = min(y[i], ymi);
    }
    if (xmi <= xma || ymi <= yma) {
        cout << 0 << endl;
        return 0;
    }
    else {
        int ans = (xmi - xma) * (ymi - yma);
        cout << ans << endl;
        return 0;
    }
}