class Solution {
public:
    
    int getCountDigits(int num) {
        
        if(num == 0) return 0;
        
        // cout <<"for " << num << " ";
        int cnt = 0;
        while(num > 0) {
            cnt++;
            num = num/10;
        }
        
        // cout << cnt << endl;
        
        return cnt;
    }
    
    int getLargetNum(int num) {
        
        int maxnum = 0;
        // cout << " maxnum " << num << " ";
        while(num > 0) {
            int rem = num%10;
            maxnum = max(rem, maxnum);
            num /= 10;
        }
        
        // cout << maxnum << endl;
        return maxnum;
    }
    int buildNewNum(int a, int b) {//2,1
        int res = 0;
        
        for(int i = 0 ; i < a ; i++) {
            res = (res*10) + b;
            // cout << "cres " << res << " ";
        }
        cout << endl;
        // cout << "a " << a << "b " << b << "res " << res << endl;
        return res;
    }
    
    int sumOfEncryptedInt(vector<int>& nums) {
        
        int totalSum = 0;
        
        for(int num: nums) {
            int temp=num;
            int countDigits = getCountDigits(temp);
            int largestNum = getLargetNum(num);
            
            // totalSum += countDigits*largestNum;
            totalSum += buildNewNum(countDigits, largestNum);
            
        }
        
        
        return totalSum;
    }
};