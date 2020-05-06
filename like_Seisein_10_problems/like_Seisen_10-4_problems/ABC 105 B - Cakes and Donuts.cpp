#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int total;
    bool ans = false;
    for (int i=0; i<N; ++i){
        for (int j=0; j<N; ++j){
            total = 4*i + 7*j;
            if (total == N) ans = true;
        }
    }
    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}