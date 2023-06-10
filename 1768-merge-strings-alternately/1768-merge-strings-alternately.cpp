class Solution {
public:
    string mergeAlternately(string word1, string word2) {
     string res = "";
     int w1i=0,w1l=word1.size(), w2i=0, w2l=word2.size();
     int ri=0;
        
     while(w1i < w1l && w2i < w2l) {
         if(ri%2) {
             res = res + word2[w2i++];
         } else 
             res = res + word1[w1i++];
         ri++;    
     }   
        
        //take care of leftovers
        while(w1i < w1l) {
             res = res + word1[w1i++];
            
        }
        while(w2i < w2l) {
             res = res + word2[w2i++];
            
        }        
        
        return res;
        
        
    }
};