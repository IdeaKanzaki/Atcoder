#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ans = 0;
    //面倒だったので全て書き出すスタイル。これ以上は語る必要なし
    if (s[0] == 'R') { //一個目Rだったら
        ans++; //ansに1足す
        if (s[1] == 'R') {
            ans++;
            if (s[2] == 'R') ans++;
        }
    }else { //s[0]==S、一個目Sだったら
        if (s[1] == 'R') {
            ans++;
            if (s[2] == 'R') ans++;
        }else { //s[1]==S
            if (s[2] == 'R') ans++;
        }
    }
    cout << ans << endl;
    return 0;
}