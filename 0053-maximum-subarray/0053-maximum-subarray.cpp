class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        
        if(arr.size() == 0) return 0;
        
        int csum=arr[0], msum = arr[0];
        
        for(int i = 1; i < arr.size(); i++) {
            int ele = arr[i];
            int sum1 = ele, sum2 = csum+ele;
            csum = max(sum1,sum2);
            msum = max(csum, msum);
            
        }
        return msum;
        
//         int csum = arr[0];
//         int maxSum = arr[0];

//         for (int i = 1; i < arr.size(); i++)
//         {
//           if (csum < 0)
//           {
//             csum = arr[i];
//           }
//           else
//           {
//             csum = csum + arr[i];
//           }
//           if (maxSum < csum)
//           {
//             maxSum = csum;
//           }
//         }
//         return maxSum;
    }
};