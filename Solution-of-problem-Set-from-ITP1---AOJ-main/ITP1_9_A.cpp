#include <bits/stdc++.h>

using namespace std;

int main(){
	string s, t;
	cin >> t;
	int count = 0 ;
	while(getline(cin, s) && s != "END_OF_TEXT"){
         for (int i = 0; i < s.size(); ++i)
         	 s[i] = tolower(s[i]);
         string res = "";
         for (int i = 0; i < s.size(); ++i){
         	 if(s[i] == ' '){
         	 	if(res == t)
         	 		count++;
         	 	res = "";
         	 }
         	 else 
         	 	res += s[i];
         }
         if(res == t)
         	 count++;
	}
	cout << count << "\n";
   return 0;
}
