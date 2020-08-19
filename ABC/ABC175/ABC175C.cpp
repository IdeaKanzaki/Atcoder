#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, k, d, ans; //バカでかい数なので誤差出さぬようlong long
    cin >> x >> k >> d; //入力
    if (x < 0) x = -x; //xが負の場合は正にする。鏡のようになり結果は変わらない
    if (x / d > k) { //負の座標に突入する直前までの回数にk回で足りないなら
        ans = x - k * d; //求める座標はk回引いた座標（の絶対値が答え）
    }else { //負の座標に突入することができる場合
        if ((k - x / d) % 2 == 0) { //突入直前までいってから、残りの回数が偶数ならその地点にしかいれない
            ans = x - (x / d) * d; //求める座標は突入直前の座標（の絶対値が答え）
        }else { //残りの回数が奇数なら
            ans = x - (x / d + 1) * d; //求める座標は負の座標突入した座標
        }
    }
    cout << abs(ans) << endl; //答えの座標の絶対値を出力
    return 0;
}