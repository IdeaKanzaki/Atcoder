#include <iostream>
#include <string>
using namespace std;

int main(){
    string S;
    cin >> S;
    int l = S.size();
    int w[26];
    for (char i='a'; i<='z'; i++) {
        w[i] = 1;
    }
    for (int i=0; i<100001; i++) {
        if (i > l) break;
        else w[S[i]] = -1;
    }
    
    for (char i='a'; i<='z'; i++) {
        if (w[i]==1) {
            cout << i << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}