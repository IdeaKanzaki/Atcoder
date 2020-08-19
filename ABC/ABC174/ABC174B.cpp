#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d, x, y; //使う数の型を決めておくぜ
    cin >> n >> d; //入力
    int ans = 0; //何個あるのかのカウント
    for (int i=0; i<n; i++) { //n回ループすればヨシ！
        cin >> x >> y; //２数の入力
        long long l2 = x * x + y * y; //xの2乗＋yの2乗をl2としている
        double l = sqrt((double)l2); //l2のルートをlとする(これが距離)
        if (l <= d) ans++; //距離がd以下ならカウント
    }
    cout << ans << endl; //カウントを出力
    return 0; //終了
}