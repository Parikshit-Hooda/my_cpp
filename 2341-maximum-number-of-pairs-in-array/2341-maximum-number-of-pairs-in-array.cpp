class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        //1. count occurences in a hashmap
        //2. calc pairs from hashmap while updating it
        //3. count leftovers
        
        //1.
        unordered_map<int,int> mp;
        for(auto num: nums) mp[num]++;
        
        //2. 
        int cntpairs = 0;
        for(auto mpele: mp) {
            auto curr = mpele;
            cntpairs += (curr.second)/2;
           // mpele.second = mpele.second%2;
           // if(mpele.second == 0) mp.remove(mpele.first);
        }
        
        // for(auto ele: mp) {
        //     cout << ele.first <<" " << ele.second << endl;
        // }
        
        //3.
        int cntl = 0;
        for(auto mpele: mp) {
            if( (mpele.second%2 ))  cntl++;
        }
        
        return {cntpairs,cntl};
        
    }
};