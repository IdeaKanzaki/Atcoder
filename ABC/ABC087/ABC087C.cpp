#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    //入力
    int n;
    int a[2][101]; //左が縦の行数、右が横の列数（念のため、余裕をもって+1）
    int ans = 0;
    cin >> n;
    for (int i=0; i<2; i++) {
        for (int j=0; j<n; j++) cin >> a[i][j];
    }
    //二次元配列に入力完了！
    for (int i=0; i<n; i++) {
        int temp = 0; //メモリ節約。この値は毎回消す。
        for (int j=0; j<=i; j++) temp += a[0][j]; //左上から何個分右に取るか
        for (int j=i; j<n; j++) temp += a[1][j]; //下へ移動して、右端まで取って足す
        ans = max(ans, temp); //前回のループと最大値比較して大きい方取る
    }
    cout << ans << endl;
    return 0;
}