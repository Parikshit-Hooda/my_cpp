 class Solution {
public:
    int fib(int n) {
        if (n == 0 || n == 1)
            return n;
        int prev2 = 0, prev = 1;
        int f = 0;
        for (int i = 2; i <= n; i++) {
            f = prev + prev2;
            prev2 = prev;
            prev = f;
        }
        return f;
    }
};