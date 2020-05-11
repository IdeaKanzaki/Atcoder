#include <iostream>
using namespace std;

int main(){
	long long A, B, C, K;
	cin >> A >> B >> C >> K;
	long long ans;
	if (K < A) ans = K;
	else if(K >= A && K < A + B) ans = A;
	else ans = 2 * A - K +B;
	cout << ans << endl;
	return 0;
}