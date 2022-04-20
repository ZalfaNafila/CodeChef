// === Made By Zalfa ===


#include <bits/stdc++.h>
using namespace std;
#define opening ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main(){
	opening
	int a,b,c,d;
    int t;
    cin >> t;
    for(int i = 1; i<=t; i++){
    cin >> a >> b >> c >> d;
    if(c < a || d < b){
        cout << "IMPOSSIBLE" << endl;
    }
    else if(c < a &&d<b){
        cout << "IMPOSSIBLE" << endl;
    }
    else{
        cout << "POSSIBLE" << endl;
        }
    }
}
