/*
* @Author: Ahmad Hamadneh
* @Date:   2020-12-08 01:30:50
* @Last Modified by:   Ahmad Hamadneh
* @Author: Ahmad Hamadneh
* @Date:   2020-12-08 01:20:34
* @Last Modified by:   Ahmad Hamadneh
* @Last Modified time: 2020-12-11 17:05:38
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	int x; cin >> x;
	int A[x];
	for(int i = 0; i < x; ++i)
		scanf("%d", A + i);
	for(int i = x; i > 0 ; --i)
		cout << A[i - 1] << ((i == 1) ? "\n" : " ");
   return 0;
}
