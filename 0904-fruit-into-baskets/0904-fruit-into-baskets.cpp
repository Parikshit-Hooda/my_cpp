class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i = fruits.size();
        unordered_map<int,int> mp;
        int j = i-1;
        int ans = 0;
        while(i--){
            mp[fruits[i]]++;
            if(mp.size()>2){
                mp[fruits[j]]--;
                if(mp[fruits[j]]==0){
                    mp.erase(fruits[j]);
                }
                j--;
            }
            // cout<<i<<" "<<j<<endl;
            ans = max(j-i+1,ans);
        }
        return ans;
    }
};