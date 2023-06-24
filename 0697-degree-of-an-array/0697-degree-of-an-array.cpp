class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> numtofreqmp;
        unordered_map<int,vector<int>> occidxmp;
        for(int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            if(numtofreqmp.find(num) != numtofreqmp.end()) {
                occidxmp[num][1] = i;
            } else occidxmp[num] = {i,i};
            
            numtofreqmp[num]++;
        }
        
        for(auto ele: numtofreqmp) {
            cout << ele.first << " " << ele.second << endl;
        }
        for(auto ele: occidxmp) {
            cout << ele.first << " " << ele.second[0] << " " << ele.second[1] << endl;
        }

        //iterate through array. for each ele, find freq. if freq > currmaxfreq, update ans, == update ans, < don't touch the ans
        int currmaxfreq = 0;
        int ans = 0;
        
        for(auto num: nums) {
            if(numtofreqmp[num] > currmaxfreq) {
                ans = occidxmp[num][1] - occidxmp[num][0] + 1;
                currmaxfreq = numtofreqmp[num];
            } else if (numtofreqmp[num] == currmaxfreq) {
                // cout  << "here" << endl;
                ans = min(ans, occidxmp[num][1] - occidxmp[num][0] + 1);
            }
            
            cout << "ans now " << currmaxfreq << " " << ans << endl;
        }
        
        cout << "final ans" << ans;
        
        return ans;
        
    }
};