
static map<string, int> mp;
class Solution {
private:
    static bool comp(string i, string j){
      if(mp[i] == mp[j]) {
          return i < j;
      }
      return mp[i] > mp[j];
    }
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        for ( string s : words ) mp[s]++;
        vector< string> temp;
        for ( auto val : mp )  temp.push_back(val.first);

        sort(temp.begin(), temp.end(), comp);
        
        vector<string> res;
        for(int i = 0; i < k; i++) res.push_back(temp[i]);

        mp.clear();
        return res;
    }
};