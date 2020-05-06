#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    sort(s.begin(), s.end()); //昇順にソート
    sort(t.begin(), t.end(), greater<char>()); //降順にソート
    if (s < t) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}