class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, vector<int>>mp;
        for(int i = 0;i < nums.size(); ++i) mp[nums[i]].push_back(i);
        
        for(auto val : mp){
            vector<int> temp = val.second;
            if(temp.size() > 1){
                for(int i = 1; i < temp.size(); ++i){
                    if(abs(temp[i] - temp[i - 1]) <= k) return true;
                }
            }
            
        }
        return false;
    }
};