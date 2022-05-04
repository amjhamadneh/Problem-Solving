#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	while(cin >> T && T != 0){
		std::vector<double> v;
		double mean = 0;
		for(int i = 0; i < T; ++i){
			double r; cin >> r;
			v.push_back(r);
            mean += r;
 		}
 		mean /= T;
		double variance = 0;
		for(int i = 0;i < T ; ++i){
			variance += pow((v[i] - mean), 2);
		}
		variance /= T;
        printf("%0.8f\n", sqrt(variance));

	}
   return 0;
}
