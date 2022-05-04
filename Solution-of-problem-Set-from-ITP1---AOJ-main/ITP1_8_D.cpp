#include <bits/stdc++.h>

using namespace std;

int main(){
	string s, p; cin >> s >> p;
	s += s;
	if(s.find(p) != string::npos){
		cout << "Yes\n";
	}
	else 
		cout << "No\n";
   return 0;
}
