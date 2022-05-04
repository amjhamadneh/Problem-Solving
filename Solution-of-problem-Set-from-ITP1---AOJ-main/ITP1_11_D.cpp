/*
* @Author: Ahmad Hamadneh
* @Date:   2020-12-11 00:23:53
* @Last Modified by:   Ahmad Hamadneh
* @Last Modified time: 2020-12-11 16:30:04
*/
#include <bits/stdc++.h>
using namespace std;

class Cube {
   public:
        int arr[7];
        Cube() {}  
        void Z() { roll(2, 3, 5, 4); }  // to right
        void Y() { roll(1, 3, 6, 4); }  // to W
        void X() { roll(1, 2, 6, 5); }  // to N
        void roll(int i, int j, int k, int l) {
            int temp = arr[i];
            arr[i]  = arr[j];
            arr[j]  = arr[k];
            arr[k]  = arr[l];
            arr[l]  = temp;
        }
        bool equal(Cube c2){
             for(int i = 1; i <= 6 ;++i)
                if(c2.arr[i] != arr[i])
                    return false;
             return true;
        }
};

bool Check(Cube c1,Cube c2) {
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 4; j++) {
            if(c1.equal(c2))
              return true;
            c1.Z();
        }
        if (i % 2) c1.Y();
        else c1.X();
    }
    return false;
}

int main() {
	int T; cin >> T;
	Cube arr[T];
	for (int i = 0; i < T; ++i){
	    for (int j = 1; j < 7; j++) 
	        scanf("%d",arr[i].arr + j); 
	}
    bool flag = true;
	for (int i = 0; i < T; ++i){
		for (int j = i + 1; j < T; ++j){
		    if(Check(arr[i], arr[j])){
		    	flag = false;
		    	goto print;
		    }
		}
	}
print:  if(flag) cout << "Yes\n";
        else cout << "No\n";
    return 0;
}
