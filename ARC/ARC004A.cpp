#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; //使う文字の型を宣言しておく
    cin >> n; //入力
    int x[110]; //xを入れる配列の用意をしておく
    int y[110]; //yを（同上
    int d2max = 0; //最大値を更新していくので、最初は0にしておく
    for (int i=0; i<n; i++) cin >> x[i] >> y[i]; //xとyの入力
    for (int i=0; i<n; i++) { //全探索。iを固めたまま、
        for (int j=i; j<n; j++) { //jのすべてのパターンを試していく
            int d2 = (x[i] - x[j])*(x[i] - x[j]) + (y[i] - y[j])*(y[i] - y[j]); //距離の二乗を計算
            if (d2 > d2max) d2max = d2; //最大値を記憶しておく
        }
    }
    double dmax = sqrt((double)d2max); //最後にルートを取る
    printf("%3.6lf", dmax); //実数部分3桁、小数部分6桁で出力
    return 0; //終了
}