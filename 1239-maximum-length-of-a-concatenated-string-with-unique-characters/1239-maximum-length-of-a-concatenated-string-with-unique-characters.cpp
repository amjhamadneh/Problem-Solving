class Solution {
public:
    int mx = 0;
    int maxLength(vector<string> arr) {
        dfs(0, arr, "");
        return mx;
    }
    
    void dfs(int start, vector<string> arr, string str){
        if(!isUnique(str)){
            return;
        }
        mx = max(mx, (int)str.size());
        
        for(int i=start; i<arr.size();i++){
            string s = arr[i];
            dfs(i+1, arr, str + s);
        }
    }
    
    bool isUnique(string s){
        int freq[26]={0};
        
        for(char ch: s){
            if(freq[ch - 'a']  + 1 > 1){
                return false;
            }
            freq[ch - 'a']++;
        }
        return true;
    }
};