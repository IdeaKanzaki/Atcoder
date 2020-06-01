#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a;
    cin >> n;
    int num[100010]={0};
    int ans = 0;
    for (int i=0; i<n; i++) {
        cin >> a;
        num[a]++;
        num[a+1]++;
        num[a-1]++;
    }
    for (int i=0; i<100000; i++) {
        ans = max(ans, num[i]);
    }
    cout << ans << endl;
    return 0;
}