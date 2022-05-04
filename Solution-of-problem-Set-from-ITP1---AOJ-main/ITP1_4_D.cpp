/*
* @Author: Ahmad Hamadneh
* @Date:   2020-12-08 00:40:31
* @Last Modified by:   Ahmad Hamadneh
* @Last Modified time: 2020-12-08 00:47:02
*/

#include <bits/stdc++.h>

using namespace std;
int main(){
	int a; cin >> a;
	std::vector<int > v;
	for(int i = 0; i < a; ++i){
		int x; cin >> x;
		v.push_back(x);
	}
	int64_t sum = 0;
	cout << *min_element(v.begin(), v.end()) << " ";
	cout << *max_element(v.begin(), v.end()) << " ";
	cout << accumulate(v.begin(), v.end(), sum) << "\n";
   return 0;
}