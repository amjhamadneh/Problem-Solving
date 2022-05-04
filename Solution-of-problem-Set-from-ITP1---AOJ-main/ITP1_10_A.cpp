#include <bits/stdc++.h>

using namespace std;

int main(){
	double x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
	printf("%0.8f\n",sqrt(pow((x2 - x1), 2) + pow(abs(y2 - y1), 2)));
   return 0;
}
