#include <iostream>
#include <string>
using namespace std;

int main(){
    string S, T;
    cin >> S >> T;
    char i;
    bool ans = false;
    for (i='a'; i<='z'; i++) {
        if (S + i == T) ans = true;
    }
    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
