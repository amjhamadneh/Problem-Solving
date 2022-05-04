/*
* @Author: Ahmad Hamadneh
* @Date:   2020-12-07 22:12:48
* @Last Modified by:   Ahmad Hamadneh
* @Last Modified time: 2020-12-07 22:17:27
*/
#include <bits/stdc++.h>

using namespace std;
int main(){
	int A[3];
	for(int i = 0 ; i < 3 ; ++i)
		scanf("%d", A+i);
	sort(A, A + 3);
	cout << A[0] << " " << A[1] << " " << A[2] << "\n";

  return 0;
}