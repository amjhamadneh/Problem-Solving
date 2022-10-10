class Solution {
public:
    string breakPalindrome(string s) {
        if(s.size() <= 1) return "";
        int index = -1;
        if(s.size() % 2)
        index = (s.size() / 2);
        for(int i =0; i< s.size(); ++i){
            int temp = s[i];
            temp--;
            if((char)(temp) < s[i] && (char)(temp) >= 'a' && i != index){
              s[i] = 'a';
              return s;
            }
        }
        for(int i =s.size() - 1; i>=0 ; --i){

            int temp = s[i];
            temp++;
            if((char)(temp) > s[i] && (char)(temp) <= 'z' && i != index){
              s[i]++;
              return s;
            }
        }  
        return "";
    }
};