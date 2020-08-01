#include <bits/stdc++.h> //全てのライブラリを一気に引っ張れる魔法
using namespace std;

int main() {
    long long a, b, x; //くそでか数字なのでlong long安定
    cin >> a >> b >> x; //入力
    long long ai = a / x; //aをxで割った整数部分をaiとする
    long long bi = b / x; //bをxで割った整数部分をbiとする
    long long start, goal; //xの倍数を数え始めるスタート地点とゴール地点
    if (ai * x == a) start = ai;　//aがxで割り切れる場合はaiから数える
    else start = ai + 1; //割り切れない場合はai+1から数え始める
    goal = bi; //bがxで割り切れるかどうかに関わらずbiはゴール地点となる
    cout << goal - start + 1 << endl; //出力
    return 0;
}