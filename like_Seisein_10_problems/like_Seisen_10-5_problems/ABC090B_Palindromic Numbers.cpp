#include <iostream>
using namespace std;

int check(int n){
    int a, b, c, d, e;
    int ans = 0;
    e = n % 10;
    n /= 10;
    d = n % 10;
    n /= 10;
    c = n % 10;
    n /= 10;
    b = n % 10;
    n /= 10;
    a = n % 10;
    n /= 10;
    if (a == e && b == d) ans = 1;
    return ans;
}

int main(){
    int A, B;
    cin >> A >> B;
    int sum=0;
    for (int i=A; i<=B; i++){
        sum += check(i);
    }
    cout << sum << endl;
    return 0;
}