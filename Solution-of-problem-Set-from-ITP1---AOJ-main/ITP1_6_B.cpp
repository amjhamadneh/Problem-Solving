#include <bits/stdc++.h>

using namespace std;

bool comp(pair<char, int > a, pair<char, int> b){
	if(a.first == b.first)
		return a.second < b.second;
	if(a.first == 'S')
		return true;
	if(b.first == 'S')
		return false;
	if(a.first == 'H')
		return true;
	if(b.first == 'H')
		return false;	
	if(a.first == 'C')
		return true;
	if(b.first == 'C')
		return false;
	if(a.first == 'D')
		return true;
	return false;
}

int main(){
	int x; cin >> x;
	set<int > A[4]; // S -> 0, H -> 1, C -> 2, D -> 3
	while(x--){
		char c; cin >> c;
		int r; cin >> r;
		if(c == 'S')
			A[0].insert(r);
		if(c == 'H')
			A[1].insert(r);
		if(c == 'C')
			A[2].insert(r);
		if(c == 'D')
			A[3].insert(r);
	}
    vector<pair<char, int> > res;
    for(int i = 0 ; i < 4 ; ++i){
    	for(int j = 1; j <= 13 ; ++j)
    		if(A[i].find(j) == A[i].end()){
    			if(i == 0)
    			  res.push_back({'S',j});
    			if(i == 1)
    			  res.push_back({'H',j});
    			if(i == 2)
    			  res.push_back({'C',j});
    			if(i == 3)
    			  res.push_back({'D',j});
    		}
    }

    sort(res.begin(), res.end(), comp);

    // Print
    for(auto &val : res)
    	cout << val.first << " " << val.second << "\n";
   return 0;
}
