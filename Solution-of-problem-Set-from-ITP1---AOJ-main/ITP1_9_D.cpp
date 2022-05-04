/*
* @Author: Ahmad Hamadneh
* @Date:   2020-12-08 20:40:32
* @Last Modified by:   Ahmad Hamadneh
* @Last Modified time: 2020-12-08 21:09:34
*/
#include <bits/stdc++.h>

using namespace std;
int main(){
	string s, c, t; cin >> s;
	int T, l, r; cin >> T;
	while (T--){
		cin >> c;
		if(c == "replace"){
			cin >> l >> r >> t;
			s = s.substr(0, l) + t + s.substr(r + 1);
		}
		else if(c == "print"){
			cin >> l >> r;
            cout << s.substr(l, r - l + 1) << "\n";
		}
		else {
			cin >> l >> r;
			string temp = s.substr(l, r - l + 1);
			s = s.substr(0, l) + string(temp.rbegin(),temp.rend()) + s.substr(r + 1);
		}
	}
   return 0;
}
