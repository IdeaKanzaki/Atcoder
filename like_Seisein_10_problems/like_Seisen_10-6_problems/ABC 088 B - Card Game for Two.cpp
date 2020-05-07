#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N,ans;
    int Alice = 0;
    int Bob = 0;
    cin >> N;
    int a[110];
    for (int i=1; i<=N; i++){
        cin >> a[i];
    }
    sort(a+1, a+N+1, greater<int>());
    for (int i=1; i<=N; i++){
        if (i % 2 == 1) {
            Alice += a[i];
        }
        else {
            Bob += a[i];
        }
    }
    ans = Alice - Bob;
    cout << ans << endl;
    return 0;
}
