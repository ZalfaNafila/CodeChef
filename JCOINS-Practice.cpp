//link : https://www.codechef.com/problems/JCOINS
// === Made by Zalfa ===

#include <bits/stdc++.h>
using namespace std;
#define opening ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main(){
	opening
	int n,x,y;
	cin >> n;
	for(int i = 1; i<=n; i++){
		cin >> x >> y;
		cout << x*10 + y*5 << endl;
	}
}
