#include <bits/stdc++.h>
using namespace std;

int main(){
    /*偶数回数字が出ると消えるので、
    奇数回出てきた文字の種類を数えればよい*/
    int n, a;
    cin >> n;
    map<int, int> num;
    for (int i=0; i<n; i++) {
        cin >> a;
        //キーaのマップが空でなければ１を足す
        if (num.find(a) != num.end()) {
            num[a] += 1;
        }
        //空なら１にする
        else {
            num[a] = 1;
        }
    }
    //ansは奇数回出てきた個数
    int ans = 0;
    //マップ配列を全て取り出す
    for (auto itr: num) {
        /*itr.firstでキーを、itr.secondで値を取り出せる
        値は出現回数なので奇数ならansに１を足す*/
        if (itr.second % 2 == 1) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}