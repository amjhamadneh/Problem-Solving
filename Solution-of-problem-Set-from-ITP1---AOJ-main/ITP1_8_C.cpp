#include <bits/stdc++.h>

using namespace std;

int main(){
	string s = "";
	int count[26] = {0};
    string line;

	while (getline(cin, line)){
	    if (line.empty()){
            break;
        }
	    s += line;
	}
    for (int i = 0; i < s.size(); ++i){
    	if(tolower(s[i]) >= 'a' && tolower(s[i]) <= 'z')
    	    count[tolower(s[i]) - 'a']++;
    }
    for(int i = 0; i < 26; ++i){
    	cout << char('a' + i) << " : " << count[i] << "\n";
    }
   return 0;
}
