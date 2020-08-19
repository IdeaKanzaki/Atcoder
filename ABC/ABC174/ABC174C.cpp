#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    int ans = 1; //最初から1項目としておく
    cin >> k; //入力
    if (k % 2 == 0) { //偶数の時
        cout << -1 << endl; //は無条件で-1を出力
        return 0; //終了
    }
    else {
        int x = 7 % k; //modkで考える 
        for (int i=0; i<k; i++) { //ループk項目まででmodkはループする
            if (x != 0) { //modkが0でない場合
                x = (x * 10 + 7) % k; //i+1桁目に突入
                ans++; //桁数カウント+1するのを忘れずに
            }
            else { //modkが0の場合、割り切れた！
                cout << ans << endl; //桁数出力
                return 0; //終了
            }
        }
        //ループk項目までにmodkが0になる数字がなかった場合
        cout << -1 << endl; //-1を出力
        return 0;
    }
}