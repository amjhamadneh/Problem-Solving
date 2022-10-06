
    
class TimeMap {
public:
    map<string, map<int, string>> mp;
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        mp[key][timestamp] = value;
    }
    
    string get(string key, int timestamp) {
        if(mp.find(key) != mp.end()){
            if(mp[key].find(timestamp) != mp[key].end()){
                return mp[key][timestamp];
            }
            else {
              
              auto temp = mp[key].upper_bound(timestamp);
              if(temp == mp[key].begin())
                return "";
              
              return prev(temp)->second;
            }
        }
        else {
            return "";
        }
    }
};
        

    
    
        

    

     
        
      
         


/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */