#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; //入力
    int ans = 0; //入れ替えた回数を定義
    string s;
    cin >> s; //色の並びの入力
    int back = n-1; //後ろからのカウント数
    for (int i=0; i<n; i++) { //前から色を調べていく
        if (s[i] == 'W') { //Wの場合、後ろからRを探して交換する
            for (int j=back; j>i; j--) { //後ろからRがあるかカウントしていく
                if (s[j] == 'R') { //後ろから数えてRがあった場合
                    s[j] = 'W'; //そのRをWに変換する
                    s[i] = 'R'; //前からのカウントしたWをRに変換する。上と合わせて石を入れ替えている
                    back--; //後ろからのカウント数を覚えておく
                    ans++; //入れ替えた数+1
                    break; //ループ抜ける
                }
                else { //後ろから数えてRがなかった場合
                    back--; //後ろからのカウントだけ進めておく
                    if (back == i) break; //後ろからのカウントが数えている一つ右を越えたらループを抜ける
                }
            }
        }
    }
    cout << ans << endl; //入れ替えた回数を出力
    return 0;
}