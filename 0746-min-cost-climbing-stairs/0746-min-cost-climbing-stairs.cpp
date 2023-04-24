class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int a = cost[0],b=cost[1],ans;
        for(int i = 2; i < cost.size(); i++){
            ans = min(a,b)+cost[i];
            a = b;
            b = ans;
        }
        return min(a,b);
    }
};