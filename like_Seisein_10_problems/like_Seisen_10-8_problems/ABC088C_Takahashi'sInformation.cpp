#include <iostream>
using namespace std;

int main() {
    int c[4][4];
    for (int i=1; i<=3; i++){
        for (int j=1; j<=3; j++){
            cin >> c[i][j];
        }
    }
    bool flag = false;
    for (int i=0; i<=c[1][1]; i++){
        int a1 = i;
        int b1 = c[1][1] - a1;
        int b2 = c[1][2] - a1;
        int b3 = c[1][3] - a1;
        if (b1 >= 0 && b2 >= 0 && b3 >= 0) {
            int a2 = c[2][1] - b1;
            if (a2 == c[2][2] - b2 && a2 == c[2][3] - b3 && a2 >= 0) {
                int a3 = c[3][1] - b1;
                if (a3 == c[3][2] - b2 && a3 == c[3][3] - b3 && a3 >= 0) {
                    flag = true;
                }
            }
        }
    }
    if (flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
