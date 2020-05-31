#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, ans;
    string b;
    cin >> a >> b;
    long long b100 = (b[0]-'0')*100 + (b[2]-'0')*10 + (b[3]-'0');
    ans = a * b100 / 100;
    cout << ans << endl;
    return 0;
}