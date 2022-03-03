//link : https://www.codechef.com/START28D/problems/QUALIFY
// === Made By Zalfa ===

#include <bits/stdc++.h>
using namespace std;
#define opening ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main(){
	opening
	int n,e,h,t;
	int easy, hard;
	cin >> n;
	for(int i = 1; i<=n; i++){
		cin >> t >> e >> h;
		easy = e*1;
		hard = h*2;
		if(easy + hard <t){
			cout << "NotQualify" << endl;
		}
		else
		cout << "Qualify" << endl;
	}
}
