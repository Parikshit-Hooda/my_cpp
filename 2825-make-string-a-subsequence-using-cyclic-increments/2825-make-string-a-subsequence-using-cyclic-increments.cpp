class Solution {
public:
    //a pointer of s1, one on s2. for each s2 idx, see if we can make s1 idx equal by shifting. if yes, both pointer inc, else only s1 inc
    
    bool canMakeSubsequence(string s1, string s2) {
        
        if(s1.size() < s2.size()) return false;
        
        int s1i=0,s2i=0;
        
        while(s1i < s1.size() && s2i < s2.size()) {
            
            char s1ishifted = (s1[s1i] == 'z') ? 'a' : (s1[s1i]+1);
            
            if(s1[s1i] == s2[s2i]) { cout<<"first " << s1i << " " << s2i << endl; s1i++; s2i++; }
            else if( s1ishifted == s2[s2i]) {  cout<<"second " << s1i << " " << s2i << endl; s1i++; s2i++; }
            else { cout<<"third " << s1i << " " << s2i << endl; ; s1i++;}
            
            
            
        }
        
        if(s2i < s2.size()) return false;
        
        return true;
    }
};