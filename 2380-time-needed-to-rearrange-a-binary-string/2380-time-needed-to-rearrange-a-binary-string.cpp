class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        
        int flag = 1, cnt = 0;
        
        while(flag) {
            flag = 0;
          for(int i = 0 ; i < s.size() - 1; i++) {
              if(s[i] == '0' && s[i+1] == '1') {
                  flag = 1;
                  s[i] = '1', s[i+1] = '0';
                  i++;
                  
              }
          }
            
            if(flag) cnt++;
        }
        
        return cnt;
    }
};