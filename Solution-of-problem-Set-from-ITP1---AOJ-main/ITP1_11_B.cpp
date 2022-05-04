/*
* @Author: Ahmad Hamadneh
* @Date:   2020-12-11 00:23:53
* @Last Modified by:   Ahmad Hamadneh
* @Last Modified time: 2020-12-11 15:50:55
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
};

int getRight(Cube c, int top, int front) {
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 4; j++) {
            if (c.arr[1] == top && c.arr[2] == front) return c.arr[3];
            c.Z();
        }
        if (i % 2) c.Y();
        else c.X();
    }
    return -1;
}

int main() {
    Cube c;   
    for (int i = 1; i < 7; i++) 
    	scanf("%d",c.arr + i); 
    int q; cin >> q;

    int top, front;
    for (int i = 0; i < q; i++) {
        cin >> top >> front;
        cout << getRight(c, top, front) << endl;
    }
    return 0;
}
