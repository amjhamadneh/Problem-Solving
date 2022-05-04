/*
* @Author: Ahmad Hamadneh
* @Date:   2020-12-08 15:05:04
* @Last Modified by:   Ahmad Hamadneh
* @Last Modified time: 2020-12-11 17:15:59
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m; cin >> n >> m;
	int arr[n][m];
	for(int i = 0 ; i < n; ++i){
		for(int j = 0 ; j < m ; ++j){
			scanf("%d", arr[i] + j);
		}
	}

	int b[m];
	for(int i = 0; i < m; ++i)
		scanf("%d", b + i);

    for(int i = 0 ; i < n; ++i){
    	int64_t sum = 0;
		for(int j = 0 ; j < m ; ++j){
		    sum += (b[j] * arr[i][j]);
		}
		cout << sum << "\n";
	}
   return 0;
}
