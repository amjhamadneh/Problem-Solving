#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m ; cin >> n >> m;
	int A[n+1][m+1];
	for(int i = 0 ; i < n; ++i){
		int sum  = 0;
		for (int j = 0; j < m; ++j){
			scanf("%d", A[i] + j);
			sum += A[i][j];
		}
		A[i][m] = sum;
	}
    for(int i = 0 ; i <= m; ++i){
		int sum  = 0;
		for (int j = 0; j < n; ++j){
			sum += A[j][i];
		}
		A[n][i] = sum;
	}
	for(int i = 0 ; i <= n; ++i){
		for (int j = 0; j <= m; ++j){
			cout << A[i][j] << ((j == m)? "\n" : " ");
		}
	}
   return 0;
}
