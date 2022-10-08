class Solution {
    public int threeSumClosest(int[] nums, int target) {
        int len = nums.length;
        Arrays.sort(nums);
        int sum = 0;
        boolean flag = true;
        for(int i = 0; i < len; ++i){
            int r = len - 1;
            int l = i + 1;
            while(l < r){
                int temp = nums[i] + nums[l] + nums[r];
                if(flag){
                    sum = temp;
                    flag = false;
                }
                else if(Math.abs(target - temp) <= Math.abs(target - sum)){
                    sum = temp;
                }
                if(target > temp)
                    l++;
                else 
                    r--;
            }
        }
        return sum;
    }
}