#include <iostream>
using namespace std;

int main(){
    int N, M;
    int a[50],b[50];
    int m[50] = {0};
    cin >> N >> M;
    for (int i=1; i<M+1; i++) {
        cin >> a[i] >> b[i];
        m[a[i]] += 1; 
        m[b[i]] += 1;
    }
    for (int i=1; i<N+1; i++) {
        cout << m[i] << endl;
    }
    return 0;
}