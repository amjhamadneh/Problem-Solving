class Solution {
public:
    static bool comp(vector<int> a, vector<int> b){
        return a[0] < b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& in) {
        sort(in.begin(), in.end(),comp);
        for(int i = 1; i < in.size(); ++i){
            if(in[i][0] <= in[i - 1][1]){
                in[i][0] = in[i - 1][0];
                in[i - 1].clear();
            }
            if(in[i][1] <= in[i - 1][1]){
                in[i][1] = in[i - 1][1];
                in[i - 1].clear();
            }
        }
        vector<vector<int>> res;
        for(int i = 0; i < in.size(); ++i){
            if(in[i].size() != 0){
                vector<int > v;
                v.push_back(in[i][0]);
                v.push_back(in[i][1]);
                res.push_back(v);
            }
        }
        return  res;
    }
};