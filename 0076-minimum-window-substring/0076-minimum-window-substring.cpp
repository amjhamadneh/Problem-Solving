class Solution {
private:
     map<int, int> mp;
public:
    string minWindow(string s, string t) {
        if (s.size() == 0 || t.size() == 0) return "";
       
        for (int i = 0; i < t.size(); i++) mp[t[i]]++;
        
        int length = t.size();
        
        int min = INT_MAX, start = 0, left = 0, i = 0;
        while(i <= s.size() && start < s.size()) {
            
            if(length > 0) {
                if (i == s.size()) break;
                mp[s[i]]--;
                if (mp[s[i]] >= 0) length--;
                i++;
            } else {
                if (i - start < min) {
                    min = i -start;
                    left = start;
                }
                mp[s[start]]++;
                if (mp[s[start]] > 0) length++;
                start++;
            }
        }
        return min == INT_MAX? "" : s.substr(left, min);
    }
};
