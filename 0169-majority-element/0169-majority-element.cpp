class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        int mx = nums[0];
        for(int i = 0;i < nums.size(); ++i){
            mp[nums[i]]++;
            if(mp[nums[i]] > mp[mx]) mx = nums[i];
        }
        return mx;
    }
};