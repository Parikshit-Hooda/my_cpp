class Solution {
public:
    int minimumMoves(string s) {
        //form the groups where the group starts from 'X'
        int cnt = 0;
        int i;
        for(i = 0; i < s.size()-2; i++) {
            if(s[i] == 'X') {
                //form the group, record
                cnt++;
                s[i+1] = s[i+2] = 'O';
            }
        }
        //here i becomes s.size()-3
        if(s[i] == 'X' || s[i+1] == 'X' || s[i+2] == 'X' ) cnt++;
        
        return cnt;
    }
};