/*
* @Author: Ahmad Hamadneh
* @Date:   2020-12-07 23:01:26
* @Last Modified by:   Ahmad Hamadneh
* @Last Modified time: 2020-12-10 22:52:20
*/

#include <bits/stdc++.h>

using namespace std;
int main(){
   int64_t a, b; cin >> a >> b;
   printf("%d %d %0.5lf\n",int(a / b) , int(a % b) , double(a /(double) b));  	  
   return 0;
}