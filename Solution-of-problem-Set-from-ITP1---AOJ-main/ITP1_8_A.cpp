#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	getline(cin, s);
	for(int i = 0; i < s.size() ; ++i){
		if(islower(s[i])){
			s[i] = toupper(s[i]);
		}
		else{
			s[i] = tolower(s[i]);
		}
	}
	cout << s << "\n";
   return 0;
}
