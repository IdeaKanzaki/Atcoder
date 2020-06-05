#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, x;
    cin >> a >> b >> x;
    //xの倍数を数え始めるスタート地点とゴール地点を決めて数を引く
    long long ai = a / x;
    long long bi = b / x;
    long long start, goal;
    //aがxで割り切れる場合はai、割り切れない場合はai+1から数え始める
    if (ai * x == a) start = ai;
    else start = ai + 1;
    //bがxで割り切れるかどうかに関わらずbiはゴール地点となる
    goal = bi;
    cout << goal - start + 1 << endl;
    return 0;
}