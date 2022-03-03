// link : https://www.codechef.com/problems/BATTERYLOW
// === Made by Zalfa ===

#include <bits/stdc++.h>
using namespace std;
#define opening ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main(){
	opening

	int n,a;
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> a;
		if(a<=15){
			cout << "Yes" << endl;
		}
		else
		cout  << "No" << endl;
	}
}
