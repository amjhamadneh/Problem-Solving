/*
* @Author: Ahmad Hamadneh
* @Date:   2020-12-07 22:26:05
* @Last Modified by:   Ahmad Hamadneh
* @Last Modified time: 2020-12-07 23:51:10
*/
#include <bits/stdc++.h>

using namespace std;
int main(){
	int64_t a, b;
	 while(cin >> a >> b && (a != 0 || b != 0)){
	      if(a > b) swap(a,b);
	      cout << a << " " << b << "\n";
	 }
  return 0;
}