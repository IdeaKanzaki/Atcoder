#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int N;
    cin >> N;
    double x[N], y[N];
    for (int i=0; i<N; ++i){
        cin >> x[i] >> y[i];
    }
    double L;
    double max = 0;
    for (int i=0; i<N; ++i){
        for (int j=i+1; j<N; ++j){
            L = pow(x[i]-x[j], 2) + pow(y[i]-y[j], 2);
            if (L > max) max = L;
        }
    }
    cout << sqrt(max) << endl;
    return 0;
}