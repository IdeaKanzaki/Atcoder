#include <bits/stdc++.h>
using namespace std;

int main() {
    //入力
    int n;
    int a[100010];
    cin >> n;
    for (int i=1; i<=n; i++) cin >> a[i];
    //２のボタンが光っている状態をtrue、光っていない状態をfalseとする関数flagを定義する。
    bool flag = false;
    //１しか光っていない状態では１しか押せない。次には１を押して光るボタンを押すしかできない。
    int temp = 1; //光っているボタンの数字
    int ans = 0; //ボタンを押した回数
    for (int i=1; i<=n; i++) {
        if (a[temp]==2) { //２が光れば終わり
            flag=true;
            ans++;
            break;
        }
        else if (a[temp]==1 || a[temp]==temp) break;
        else { //次に光るボタンを押していく
            temp = a[temp];
            ans++;
        }
    }
    if (flag) cout << ans << endl;
    else cout << -1 << endl;
    return 0;
}