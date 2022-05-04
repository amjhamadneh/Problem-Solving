#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, l; cin >> n >> m >> l;
	int a[n][m], b[m][l];
	for(int i = 0 ; i < n; ++i){
		for(int j = 0 ; j < m; ++j){
			cin >> a[i][j];
		}
	}  
	for(int i = 0 ; i < m; ++i){
		for(int j = 0 ; j < l; ++j){
			cin >> b[i][j];
		}
	}  
	for(int i = 0 ; i < n ; ++i){
		for(int k = 0; k < l ; ++k){
		    int64_t sum = 0;
			for(int j = 0 ; j < m; ++j){
     		    sum += (a[i][j] * b[j][k]);
			}
			cout << sum << ((k == l - 1) ? "\n" : " ");
		}
	}
   return 0;
}