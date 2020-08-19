#include <bits/stdc++.h>
using namespace std;

int main() {
    //入力
    char al;
    cin >> al;
    //std:isupper()で大文字かどうかを判定（大文字ならtrue）
    if (isupper(al)) cout << "A" << endl;
    else cout << "a" << endl;
    return 0;
}