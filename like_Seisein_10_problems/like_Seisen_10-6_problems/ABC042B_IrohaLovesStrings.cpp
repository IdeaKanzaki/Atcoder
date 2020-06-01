#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    string S[110];
    for (int i=1; i<N+1; i++) cin >> S[i];
    sort(S+1, S+N+1);
    for (int i=1; i<N+1; i++){
        cout << S[i];
    }
    cout << endl;
}
