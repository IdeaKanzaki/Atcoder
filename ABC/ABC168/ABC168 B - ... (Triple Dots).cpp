#include <iostream>
#include <string>
using namespace std;
 
int main(){
	string S;
	int k, s;
	cin >> k >> S;
	s = S.length();
	if (s <= k) cout << S << endl;
	else {
	    cout << S.erase(k)+"..." << endl;
	}
	return 0;
}