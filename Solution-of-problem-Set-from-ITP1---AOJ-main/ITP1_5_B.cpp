/*
* @Author: Ahmad Hamadneh
* @Date:   2020-12-08 00:48:46
* @Last Modified by:   Ahmad Hamadneh
* @Last Modified time: 2020-12-08 01:01:24
*/

#include <bits/stdc++.h>

using namespace std;
int main(){
    int a, b; 
    while(cin >> a >> b && (a != 0 || b != 0)){
    	for(int i = 0; i < a; ++i){
    		for(int j = 0; j < b ; ++j){
    			if(i == 0 || i == a - 1 || j == 0 || j == b - 1)
    			    cout << "#";
    			else
    				cout << ".";
    		}
    		cout << "\n";
    	}
    	cout << "\n";
    }
   return 0;
}