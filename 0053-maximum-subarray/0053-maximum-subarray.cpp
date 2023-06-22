class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int csum = arr[0];
        int maxSum = arr[0];

        for (int i = 1; i < arr.size(); i++)
        {
          if (csum < 0)
          {
            csum = arr[i];
          }
          else
          {
            csum = csum + arr[i];
          }
          if (maxSum < csum)
          {
            maxSum = csum;
          }
        }
        return maxSum;
    }
};