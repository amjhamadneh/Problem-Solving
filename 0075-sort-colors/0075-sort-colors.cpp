class Solution {
public:
    void sortColors(vector<int>& nums) {
        cout << "[";
        for(int i = 0 ; i < nums.size(); ++i){
            for(int j = i + 1; j < nums.size(); ++j){
                if(nums[j] < nums[i]){
                    swap(nums[i], nums[j]);
                }
            }
            if(i + 1 != nums.size())
                cout << nums[i] << ",";
            else 
                cout << nums[i] << "]";
        }
    }
};