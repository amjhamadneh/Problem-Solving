class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int >> v;
        
        if(nums.size() < 3)
           return v;
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0 ;i < nums.size() - 2; ++i){
            if(i > 0 && nums[i] == nums[i - 1])
                  continue;
            int l = i + 1, r = nums.size() - 1;
            while(l < r){
                if(nums[i] + nums[l] + nums[r] == 0){
                    vector<int > temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[l]);
                    temp.push_back(nums[r]);
                    v.push_back(temp);
                    l++;
                    r--;
                    while(l < r && nums[l] == nums[l - 1]) l++;
                    while(l < r && nums[r] == nums[r + 1]) r--;
                }
                else if(nums[i] + nums[l] + nums[r] > 0)
                    r--;
                else 
                    l++;
            }
        }
        return v;
    }
};