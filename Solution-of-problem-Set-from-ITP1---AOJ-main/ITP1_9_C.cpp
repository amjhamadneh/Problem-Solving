#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;
    int x = 0, y = 0;
	while(T--){
		string a, b; cin >> a >> b;
		if(a > b)
			x += 3;
		else if(a < b)
			y += 3;
		else {
			x++;
			y++;
		}
	}
	cout << x << " " << y << "\n";
   return 0;
}
