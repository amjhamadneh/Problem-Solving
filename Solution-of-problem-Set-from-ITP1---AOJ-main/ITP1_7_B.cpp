/*
* @Author: Ahmad Hamadneh
* @Date:   2020-12-07 23:23:39
* @Last Modified by:   Ahmad Hamadneh
* @Last Modified time: 2020-12-07 23:51:31
*/

#include <bits/stdc++.h>

using namespace std;
int main(){
	int x, y; 
	while(cin >> x >> y && (x != 0 || y != 0)){
		int c = 0;
		for(int i = 1; i < x - 1; ++i){
			for(int j = i + 1 ; j < x ; ++j)
				for(int k = j + 1; k <= x; ++k)
					if(i + j + k == y)
						c++;
		}
		cout << c << "\n";
	}
   return 0;
}