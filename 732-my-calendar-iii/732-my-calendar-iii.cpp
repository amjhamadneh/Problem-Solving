class MyCalendarThree {
public:
    map<int,int>mp;
    int c =-1;
    MyCalendarThree() {
    }
    
    int book(int start, int end) {
        mp[start]++;
        mp[end]--;
        int count =0;
        for(auto i : mp){
            count+= i.second;
            c= max(count , c);
        }
        return c;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */