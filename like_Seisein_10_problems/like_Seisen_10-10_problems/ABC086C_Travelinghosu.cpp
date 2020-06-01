#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int t[100010];
    int x[100010];
    int y[100010];
//条件をすべて満たさないとNoになるように設計
    string ans = "Yes";
    cin >> n;
//初期条件を設定
    t[0] = 0;
    x[0] = 0;
    y[0] = 0;
//各パラメータを入力
    for (int i=1; i<=n; i++) {
        cin >> t[i] >> x[i] >> y[i];
    }
//i->i+1の時間と距離の差を考える
    for (int i=0; i<n; i++) {
        int dt = t[i+1]-t[i];
        int dist = abs(x[i+1]-x[i])+abs(y[i+1]-y[i]);
/*１時間単位に対して動く距離は１より、
距離の差が時間の差より大きく、かつ差の偶奇が一致しなければNoに*/
        if (dist > dt || dt % 2 != dist % 2) ans = "No";
        else continue;
    }
    cout << ans << endl;
    return 0;
}