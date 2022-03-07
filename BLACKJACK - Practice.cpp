// === Made by Zalfa ===
//https://www.codechef.com/problems/BLACKJACK

#include <bits/stdc++.h>
using namespace std;
#define opening ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main(){
	opening
	int n;
	int x,y;
	cin >> n;
	for(int i = 1; i<=n; i++){
		cin >> x >> y;
		int num = 21 - x - y;
		if(num >=1 && num <= 10){
			cout << num << endl;
		}
		else if(num > 10){
			cout << "-1" << endl;
		}
	}
}
