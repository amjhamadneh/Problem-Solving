class Solution {
private:
    string res = "11";
    void change(){
        int i = 0, j = 1;
        string temp = "";
        for(; j < res.size(); ++j){
            if(res[j] != res[i]){
                temp += to_string(j - i);
                temp += res[i];
                i = j;
            }
        }
        temp += to_string(j - i);
        temp += res[i];
        res = temp;
    }
public:
    string countAndSay(int n) {
        if(n == 1) return "1";
        n-=2;
        while(n--){
            change();
        }
        return res;
    }
};