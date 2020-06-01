#include <iostream>
using namespace std;

int findSumOfDigits(int n){
    int sum = 0;
    while (n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    int x;
    cin >> x;
    int f = findSumOfDigits(x);
    if (x % f == 0){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;
    return 0;
}