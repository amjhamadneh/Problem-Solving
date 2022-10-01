

class Solution {
public:
	int numDecodings(string s) {
        if (s[0] == '0') 
            return 0;
		if (s.size() == 1) 
            return 1;

        int dp[s.size() + 1];
        memset(dp,0,sizeof(dp));
        dp[0] = 1;
        dp[1] = s[0] != '0';
        
        for (int i = 1; i < s.size(); ++i) {
            if (s[i] != '0') {
                dp[i + 1] += dp[i];
            }

            int num = (s[i - 1] - '0') * 10 + s[i] - '0'; // merge two char
            if (num >= 10 && num <= 26) {
                dp[i + 1] += dp[i - 1];
            }
        }
        
        return dp[s.size()];

    }
};
