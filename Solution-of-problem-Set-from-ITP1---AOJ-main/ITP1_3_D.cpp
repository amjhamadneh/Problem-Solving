/*
* @Author: Ahmad Hamadneh
* @Date:   2020-12-07 22:32:14
* @Last Modified by:   Ahmad Hamadneh
* @Last Modified time: 2020-12-07 22:32:24
*/
#include <bits/stdc++.h>

using namespace std;
int main(){
	int64_t a, b, c; cin >> a >> b >> c;
	int count = 0;
	for(int i  = a ; i <= b; ++i)
		if(c % i == 0)
			count ++;
	cout << count << "\n";
   return 0;
}