#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	while(cin >> s && s != "-"){
		int x; cin >> x;
		while(x--){
			int t; cin >> t;
			s = s.substr(t) + s.substr(0,t);
		}
		cout << s << "\n";
	}
   return 0;
}
