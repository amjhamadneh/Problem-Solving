class Solution {
public:
    void rotate(vector<int>& n, int k) {
        int len = n.size();
        k %= len ;
        vector<int> v(len);
        int u = 0;
        for(int i = len - k; i < len; i++)
            v[u++] = n[i];
        for(int i = 0; i < len - k; i++)
            v[u++] = n[i];
        n = v;        
    }
};