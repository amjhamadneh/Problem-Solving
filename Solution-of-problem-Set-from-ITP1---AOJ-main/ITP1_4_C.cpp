/*
* @Author: Ahmad Hamadneh
* @Date:   2020-12-08 00:33:19
* @Last Modified by:   Ahmad Hamadneh
* @Last Modified time: 2020-12-08 00:36:38
*/

#include <bits/stdc++.h>

using namespace std;
int main(){
	int a, b;
	char c;
	while(cin >> a >> c >> b && c != '?'){
		if(c == '+')
			cout << a + b << "\n";
		if(c == '-')
			cout << a - b << "\n";
		if(c == '*')
			cout << a * b << "\n";
		if(c == '/')
			cout << a / b << "\n";
	}
   return 0;
}