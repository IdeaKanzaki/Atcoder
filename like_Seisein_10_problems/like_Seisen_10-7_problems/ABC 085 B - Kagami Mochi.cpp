#include <iostream>
#include <set>
using namespace std;

int main(){
    int N;
    int d[110];
    cin >> N;
    for (int i=1; i<N+1; i++) cin >> d[i];
    
    set<int> omochi;
    for (int i=1; i<N+1; i++) {
        omochi.insert(d[i]);
    }
    cout << omochi.size() << endl;
    return 0;
}