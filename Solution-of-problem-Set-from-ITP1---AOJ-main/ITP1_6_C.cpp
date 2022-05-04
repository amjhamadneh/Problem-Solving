#include <bits/stdc++.h>

using namespace std;

int main(){
	int T; cin >> T;
	int A[5][4][11];
	for(int i = 1; i < 5; ++i){
		for(int j = 1; j < 4; ++j){
			for(int k = 1; k < 11; ++k){
				 A[i][j][k] = 0;
			}
		}
	}
	while(T--){
		int b, f, r, v; cin >> b >> f >> r >> v;
		A[b][f][r] += v;
	}
	for(int i = 1; i < 5; ++i){
		for(int j = 1; j < 4; ++j){
			cout << " ";
			for(int k = 1; k < 11; ++k){
				cout << A[i][j][k] << ((k + 1 < 11)? " " : "\n");
			}
		}
		if(i <= 3)
		   cout << "####################\n";
	}
   return 0;
}
