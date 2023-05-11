class Solution {
public:
    int arrangeCoins(int n) {
        int c=n;
        long long i=1;
        if(n==0) return 0;
        else if(n==1) return 1;
        while(c>0){
            i++;
            c-=i;

        }
    return i-1;
    }
};