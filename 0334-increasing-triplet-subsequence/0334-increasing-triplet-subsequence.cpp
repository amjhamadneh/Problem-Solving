class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int m = INT_MAX,l = INT_MAX;
        for(int i = 0; i < nums.size(); ++i){
            if(l >= nums[i]) l = nums[i];
            else if(m >= nums[i]) m = nums[i];
            else return true;
        }
        return false;
    }
};