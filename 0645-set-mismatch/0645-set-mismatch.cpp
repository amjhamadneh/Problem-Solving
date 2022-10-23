class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int>mp;
        for(int i = 0; i < nums.size(); ++i){
           mp[nums[i]]++;
        }
        int l = -1, r = -1;
        for(int i = 1;i < nums.size() + 1; ++i){
            if(mp[i] == 2 && l == -1) l = i;
            if(mp[i] == 0 && r == -1) r = i;
        }
        return {l,r};
    }
};