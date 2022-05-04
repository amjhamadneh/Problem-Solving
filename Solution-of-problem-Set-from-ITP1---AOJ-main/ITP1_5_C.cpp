/*
* @Author: Ahmad Hamadneh
* @Date:   2020-12-08 01:03:21
* @Last Modified by:   Ahmad Hamadneh
* @Last Modified time: 2020-12-08 01:09:55
*/
#include <bits/stdc++.h>

using namespace std;
int main(){
    int a, b; 
    while(cin >> a >> b && (a != 0 || b != 0)){
    	bool flag = true;
    	for(int i = 0; i < a; ++i){
    		if(flag){
    			char c = '#';
				for(int j = 0; j < b ; ++j){
				    cout << c;
				    if(c == '#')
				        c = '.';
				    else 
				        c = '#';	
				}
				flag = false;
    		}
    		else{
    			char c = '.';
			    for(int j = 0; j < b ; ++j){
			        cout << c;
				    if(c == '#')
				        c = '.';
				    else 
				        c = '#';
		        }
		        flag = true;
    		}
    		cout << "\n";
    	}
    	cout << "\n";
    }
   return 0;
}