class Solution {
public:
    bool checkIfPangram(string s) {
        int arr[26] = {0};
        for(int i = 0; i < s.size(); ++i) arr[s[i] - 'a']++;
        for(int i = 0 ;i < 26; ++i)
            if(!arr[i]) return false;
        return true;
    }
};