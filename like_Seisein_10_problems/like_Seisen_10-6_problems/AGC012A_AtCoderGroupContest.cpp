#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    long long a[300010];
    long long ans = 0;
    for (int i=1; i<3*N+1; i++) cin >> a[i];
    sort(a+1, a+3*N+1);
    for (int i=N+1; i<3*N; i += 2){
        ans += a[i];
    }
    cout << ans << endl;
    return 0;
}
