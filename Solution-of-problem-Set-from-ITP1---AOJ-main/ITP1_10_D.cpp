#include <bits/stdc++.h>

using namespace std;

int main(){
	int T; cin >> T;
	vector<double> x(T), y(T);
	for(int i = 0; i < T; ++i){
		cin >> x[i];
	}
	for(int i = 0; i < T; ++i){
		cin >> y[i];
	}
    //p = 1
    double one = 0;
    for(int i = 0; i < T; ++i){
		one += abs(x[i] - y[i]);
	}
	//p = 2
    double two = 0;
    for(int i = 0; i < T; ++i){
		two += pow(abs(x[i] - y[i]), 2);
	}
	two = sqrt(two);
	//p = 3
    double three = 0;
    for(int i = 0; i < T; ++i){
		three += pow(abs(x[i] - y[i]), 3);
	}
	three = cbrt(three);
    // infinity
    double mx = 0;
	for(int i = 0; i < T; ++i){
		mx = max(mx, abs(x[i] - y[i]));
	}
    cout <<fixed << setprecision(6) << one << "\n" << two << "\n" << three << "\n" << mx << "\n";
   return 0;
}
