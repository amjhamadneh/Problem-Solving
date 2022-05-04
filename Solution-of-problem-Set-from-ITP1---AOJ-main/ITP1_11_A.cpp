#include <bits/stdc++.h>

using namespace std;

int main(){
	int A[7];
	for (int i = 1; i <= 6; ++i){
		   scanf("%d", A + i);
	}
	string s; cin >> s;
	for (int i = 0; i < s.size(); ++i){
		if(s[i] == 'S'){
			int temp = A[5];
			A[5] = A[6];
			A[6] = A[2];
			A[2] = A[1];
			A[1] = temp;
		}
		else if(s[i] == 'E'){
			int temp = A[3];
			A[3] = A[1];
			A[1] = A[4];
			A[4] = A[6];
			A[6] = temp;	
		}
		else if(s[i] == 'N'){
			int temp = A[5];
			A[5] = A[1];
			A[1] = A[2];
			A[2] = A[6];
			A[6] = temp;	
		}

		else if(s[i] == 'W'){
			int temp = A[4];
			A[4] = A[1];
			A[1] = A[3];
			A[3] = A[6];
			A[6] = temp;	
		}
	}
	cout << A[1] << "\n";
   return 0;
}
