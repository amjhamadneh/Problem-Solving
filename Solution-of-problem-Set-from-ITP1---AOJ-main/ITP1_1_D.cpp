/*
* @Author: Ahmad Hamadneh
* @Date:   2020-12-07 21:46:59
* @Last Modified by:   Ahmad Hamadneh
* @Last Modified time: 2020-12-11 16:53:21
*/
#include <bits/stdc++.h>

using namespace std;
int main(){
	  int64_t second; cin >> second;
	  int64_t hour = second / (60 * 60);
	  second -= hour * 60 * 60;
	  int64_t minute = second / 60;
	  second -= minute * 60;
	  cout << hour << ":" << minute << ":" << second << "\n";
  return 0;
}