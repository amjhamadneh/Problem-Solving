class Solution {
    public List<Integer> intersection(int[][] nums) {
        int len = nums.length;
        int []freq = new int[1005];
        for(int i = 0; i < len; ++i){
            for(int j = 0; j < nums[i].length; ++j)
                freq[nums[i][j]]++;
        }
        List<Integer> res= new ArrayList<>();
        for(int i = 0;i < 1005; ++i){
            if(freq[i] == len)
                res.add(i);
        }
        return res;
    }
}