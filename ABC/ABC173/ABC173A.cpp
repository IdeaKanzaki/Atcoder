#include <bits/stdc++.h>
using namespace std;

int main() {
    //入力
    int n;
    cin >> n;
    n = n % 1000;
    if (n == 0) cout << 0 << endl;
    else cout << 1000 - n << endl;
    return 0;
}