#include <bits/stdc++.h>
using namespace std;
 
int main() {
    //入力
    int n,k;
    int p[1010];
    cin >> n >> k;
    for (int i=0; i<n; i++) cin >> p[i];
    //pという配列に入れて小さいもの順に並び替え、0個目からk個前から取る
    sort(p, p+n);
    int ans=0;
    for (int i=0; i<k; i++) {
        ans += p[i];
    }
    cout << ans << endl;
    return 0;
}