#include <bits/stdc++.h>
using namespace std;

int main() {
    //入力
    int h, w, k;
    char c[6][6];
    vector<int> H;
    vector<int> W;
    cin >> h >> w >> k;
    for (int i=0; i<h; i++) {
        for (int j=0; j<w; j++) {
            cin >> c[i][j];
        }
    }
    // {1, ..., h} の部分集合の全探索
    for (int bit = 0; bit < (1<<h); ++bit) {
        for (int i = 0; i < h; ++i) {
            if (bit & (1<<i)) { // 列挙に i が含まれるか
                H.push_back(i);
            }
        }
    }
    // {1, ..., w} の部分集合の全探索
    for (int bit = 0; bit < (1<<w); ++bit) {
        for (int i = 0; i < w; ++i) {
            if (bit & (1<<i)) { // 列挙に i が含まれるか
                W.push_back(i);
            }
        }
    }
    int temp = 0;
    int ans = 0;
    for (int i = 0; i < (int)H.size(); ++i) {
        for (int j = 0; j < (int)W.size(); ++j) {
            if (c[H[i]][W[j]]=='#') temp++;
        }
        if (temp == k) ans++;
    }
    cout << ans << endl;
    return 0;
}