#include <bits/stdc++.h>

using namespace std;

int main(){
	string num; 
	while(cin >> num){
		if(num.size() == 1 && num[0] == '0')
			break;
		int64_t sum = 0;
		for (int i = 0; i < num.size(); ++i){
			sum += int64_t(num[i] - '0');
		}
		cout << sum << "\n";
	}
   return 0;
}
