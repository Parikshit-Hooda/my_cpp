class Solution {
public:
    
    int calc(int n) {
        int temp = n; int sum = 0;
        while(temp > 0) {
            int rem = temp%10;
            temp /= 10;
            sum += rem*rem;
        }
        
        return sum;
    }
    
    
    bool isHappy(int n) {
        int f=0,s=0;
        f=n,s=n;
        while(1) {
            f=calc(f);
            f = calc(f);
            s = calc(s);
            if(s==1) return true; //first condition
            if(f==s) //loop exists
            {
                return false;
            }
            n = s;
        }
        
        return false;
    }
};