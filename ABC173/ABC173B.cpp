#include <bits/stdc++.h>
using namespace std;

int main() {
    //入力
    int n;
    string s[100010];
    cin >> n;
    int c0 = 0;
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    string a0 = "AC";
    string a1 = "WA";
    string a2 = "TLE";
    string a3 = "RE";
    for (int i=0; i<n; i++) cin >> s[i];
    for (int i=0; i<n; i++) {
        if (s[i] == a0) c0++;
        else if (s[i] == a1) c1++;
        else if (s[i] == a2) c2++;
        else if (s[i] == a3) c3++;
    }
    cout << a0 << " " << "x" << " " << c0 << endl;
    cout << a1 << " " << "x" << " " << c1 << endl;
    cout << a2 << " " << "x" << " " << c2 << endl;
    cout << a3 << " " << "x" << " " << c3 << endl;
    return 0;
}