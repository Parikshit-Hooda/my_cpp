class Solution {
public:
    int bitwiseComplement(int n) {
       // int ans=0;
       if(n==0) return 1;
        for(int i=1;i<=n;i=i*2){
            n=n^i;
        }
        return n;
    }
};