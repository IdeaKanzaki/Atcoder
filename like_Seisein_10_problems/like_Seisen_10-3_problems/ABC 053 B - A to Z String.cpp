#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int L = s.rfind("Z") - s.find("A") + 1;
    cout << L << endl;
    return 0;
}