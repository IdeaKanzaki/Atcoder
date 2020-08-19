#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; //10^5が最大なのでintで事足りる
    cin >> n; //nの入力
    long long ans = 1; //トレーニング開始前のパワーは１
    //mod1000000007、計算ごとに割っても結果は同じ
    for (int i=1; i<=n; i++) { //1からnまでiが増えていく
        ans = (ans * i) % 1000000007; //毎回1000000007で割る
    }
    cout << ans << endl; //答えの出力
    return 0;
}