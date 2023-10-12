class Solution {
public:
    set<char> s = {'a','e','i','o','u'};
    int vowelStrings(vector<string>& words, int left, int right) {
        int cnt=0;
        
        for(int i = left; i <= right; i++) {
            // if(left < words.size()  && right >)
            string curr = words[i];
            int csize = curr.size();
            // if(left > csize) continue;
            // if(csize > right) {
                if(s.find(curr[0]) != s.end() && s.find(curr[curr.size()-1]) != s.end()) cnt++;
            // }
        }
        
        return cnt;
        
    }
};