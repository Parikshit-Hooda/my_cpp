class Solution {
public:
    int minimumCardPickup(vector<int>& arr) {
        int ans= INT_MAX;
        
        // for storing latest index of any num
        unordered_map<int,int> map;
        
        
        for(int i=0;i<arr.size();i++){
            //num seen
            if(map.count(arr[i])) ans= min(ans,i-map[arr[i]]+1);
            // new num encountered
            map[arr[i]]=i;
        }
        
        return ans==INT_MAX?-1:ans;
    }
}; //to visit - unoriginal