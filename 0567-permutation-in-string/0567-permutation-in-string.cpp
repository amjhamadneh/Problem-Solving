class Solution {
public:
    map<int,int>mp1, mp2;
    bool check(){
        for(auto val : mp1){
            if(mp2[val.first] != val.second) return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s2.size() < s1.size()) return false;
        
        for(int i =0; i < s1.size(); ++i){
            mp1[s1[i]]++;
        }
        
        int i = 0;
        for(int j = 0; j < s2.size(); ++j){
            mp2[s2[j]]++;
            if(j - i + 1 == s1.size()){
                if(check()) return true;
                mp2[s2[i]]--;
                i++;
            }
        }
        return false;
    }
};