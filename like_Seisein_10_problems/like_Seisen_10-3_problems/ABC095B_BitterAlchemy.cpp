#include <iostream>
using namespace std;

int main(){
    int N, X;
    cin >> N >> X;
    int m[N];
    int min = 10000;
    int sum = 0;
    for (int i=0; i<N; ++i){
        cin >> m[i];
        sum += m[i];
        if (m[i] < min) min = m[i];
    }
    int ans = (X-sum)/min + N;
    cout << ans << endl;
    return 0;
}
