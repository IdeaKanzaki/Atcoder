#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int a, b, c, d; //数値四つの入力
    char op1, op2, op3; //記号の入力
    string input; //文字として受け取って、後で数値に変換
    cin >> input;
    a = input[0] - '0'; //左辺の型に合わせて右辺はintになる
    b = input[1] - '0'; //'0'は内部で48として認識されてるので、それを引くと正しい数字になる
    c = input[2] - '0';
    d = input[3] - '0';
    for (int bit = 0; bit < (1<<3); bit++) { //bit探索。'+'を1、'-'を0とする。(1<<3)は2^3の意。
        int ans = a;
        //1を2桁左シフトしたもの100とbitの&計算、つまりは3桁目が1かどうか調べている。
        if (bit & (1<<2)) {
            op1 = '+';
            ans += b;
        }
        //3桁目0なら'-'
        else {
            op1 = '-';
            ans -= b;
        }

        if (bit & (1<<1)) {
            op2 = '+';
            ans += c;
        }
        else {
            op2 = '-';
            ans -= c;
        }

        if (bit & 1) {
            op3 = '+';
            ans += d;
        }
        else {
            op3 = '-';
            ans -= d;
        }
        // ansが7ならループを抜ける
        if (ans == 7) break;
    }
    cout << a << op1 << b << op2 << c << op3 << d << "=7" << endl;
    return 0;
}