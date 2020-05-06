#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    int T, A;
    cin >> T >> A;
    int H[N],D;
    int res = 0;
    int min = 1000000;
    for (int i = 1; i < N+1; ++i){
        cin >> H[i];
        D = 1000*T - 6*H[i] - 1000*A;
        if (D < 0){
            D = -D;
        }
        if (D < min){
            min = D;
            res = i;
        }
    }

    cout << res << endl;
    return 0;
}
