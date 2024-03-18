class Solution {
public:
    
    long long cntProg(string s, char c, long long charOcc) {
        long long cnt = 0;
        
        for(long long i = 1; i <= charOcc; i++) {
            cnt += (i-1);
        }
        
        return cnt;
    }
    
    long long countSubstrings(string s, char c) {
        
        long long cnt = 0;
        
        // for(auto )
        cnt = ranges::count(s,c);
        
        cnt += cntProg(s,c, cnt);
        
        return cnt;
    }
};