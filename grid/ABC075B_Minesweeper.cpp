#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    string s[50];
    cin >> h >> w;
    for (int i=0; i<h; i++) cin >> s[i];
    const int dx[8] = {0, 0, 1, 1, 1,-1,-1,-1};
    const int dy[8] = {1,-1, 0, 1,-1, 0, 1,-1};
    for (int i=0; i<h; i++) {
        for (int j=0; j<w; j++) {
            if (s[i][j] == '#') continue;
            
            int num = 0;
            for (int d=0; d<8; d++) {
                const int ni = i + dy[d];
                const int nj = j + dx[d];

                if (ni < 0 || ni >= h) continue;
                if (nj < 0 || nj >= w) continue;
                if (s[ni][nj] == '#') num++;
            }
            /*'0'の内部表現が48なので、
            num(たとえば2)を足すと、'2'を表す内部表現50となる*/
            s[i][j] = char(num + '0');

        }
    }
    
    for (int i=0; i<h; i++) cout << s[i] << endl;

    return 0;
}