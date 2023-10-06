#define ll long long
class Solution {
public:
    long long maximumSumOfHeights(vector<int>& mh) {
        
        int n = mh.size();
        ll ans = 0;
        
        for(int i=0; i<n; i++){
            
            ll total = 0;
            ll min1 = mh[i];  ll min2 = mh[i];
            
            for(int j=i; j<n; j++){ // from ith index to last index
                if(mh[j]>=min1) total += min1;
                else if(min1>mh[j]){
                    min1 = mh[j];
                    total += min1;
                }
            }
            
            for(int j=i; j>=0; j--){ // from ith index to starting index
                if(mh[j]>=min2) total+= min2;
                else if(min2>mh[j]){
                    min2 = mh[j];
                    total += mh[j];
                }
            }
            
            total = total - mh[i]; // as we added mh[i] twice so substract one time
            ans = max( ans, total);
        }
        
        return ans;
        
    }
};