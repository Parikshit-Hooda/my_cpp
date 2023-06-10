class Solution {
public:
    string mergeAlternately(string s1, string s2) {
        string ans = "";
        int i;
        for(i = 0; i < min(s1.length(),s2.length()); i++){//first add element in ans string alternative untill one string doesn't end
            ans += s1[i];
            ans += s2[i];
        }
		//after ending a string add another string chars continuous
		for(;i < s2.length(); i++){
            ans += s2[i];
        }for(;i < s1.length(); i++){
            ans += s1[i];
        }
        return ans;//returning ans string
    }
};