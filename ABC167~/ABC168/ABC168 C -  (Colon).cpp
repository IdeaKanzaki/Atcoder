#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;

long double dist(long double a, long double b) {
    long double x = sqrt(a*a + b*b);
    return x;
}
 
int main(){
	long double a, b, h, m;
	cin >> a >> b >> h >> m;
	long double x1, x2, y1, y2, x, y, ans;
    long double PI = M_PI;
	x1 = a*sin((h+m/60)*(PI/6));
	x2 = b*sin(m*PI/30);
    y1 = a*cos((h+m/60)*(PI/6));
	y2 = b*cos(m*PI/30);
	x = x1 - x2;
	y = y1 - y2;
	ans = dist(x, y);
	cout << setprecision(15) << ans << endl;
	return 0;
}