// === Made by Zalfa ===
// so i use modulo to count the repeated sequence of the size
// and the order of the size is : Normal - Huge - Small
// so if n modulo 3 is 1 then the size will repeated and ended in 'Normal', so on..

#include <bits/stdc++.h>
using namespace std;
#define opening ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main(){
	opening
    int t;
    cin >> t;
    int n;
    for(int i = 1; i<= t; i++){
        cin >> n;
        if(n % 3 == 1){
            cout << "HUGE" << endl;
    }
        else if(n % 3 == 2){
            cout << "SMALL" << endl;
        }
        else if(n% 3 == 0){
            cout << "NORMAL" << endl;
        }
}
}
