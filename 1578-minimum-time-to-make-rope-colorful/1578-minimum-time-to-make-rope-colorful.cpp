class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int mx = neededTime[0];
        int sum = neededTime[0];
        int count = 0; 
        int res = 0;
        for(int i = 1; i < colors.size(); ++i){
            if(colors[i] == colors[i - 1]){
                mx = max(neededTime[i], mx);
                sum += neededTime[i];
                count++;
            }
            else {
                if(count > 0)
                    res += (sum - mx);
                count = 0;
                sum = neededTime[i];
                mx = neededTime[i];
            }
        }
        if(count > 0){
            res += (sum - mx);
        }
        return res;
    }
};