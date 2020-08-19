#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, surplus;
    cin >> a >> b >> c;
    bool can = false;
    /* iを増やしていくとiがbになった時点で余りは0となり、
    そこから余りの遷移はループする。
    よって、１ループ内で調べれば全てを調べたことになる。*/
    for (int i=1; i<=b; i++) {
        surplus = (a * i) % b;
        if (surplus == c) can = true;
    }
    if (can) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}