/*
* @Author: Ahmad Hamadneh
* @Date:   2020-12-07 22:35:14
* @Last Modified by:   Ahmad Hamadneh
* @Last Modified time: 2020-12-11 16:58:38
*/

#include <bits/stdc++.h>

using namespace std;
int main(){
	int w, h, x, y, r; cin >> w >> h >> x >> y >> r;
	if(y + r <= h && y - r >= 0 && x - r >= 0 && x + r <= w)
		cout << "Yes\n";
	else 
	    cout << "No\n";	 	  
   return 0;
}