class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        
        int ans = 0;
        
        for(int num = low; num <= high; num++) {
            int suml = 0, sumr = 0;
            int curr = num;
            string cstr = to_string(curr);   
             int cstrsize = cstr.size();
             if( !(cstrsize%2) ) {
                 //even numbers of digits
                 int l = 0, r = cstr.size()-1;
                 while(l < r) {
                     suml += cstr[l] - '0';
                     sumr += cstr[r] - '0';
                     l++; r--;
                 }
                 if(suml == sumr) ans++;
                // cout <<"sum nums " << cstr << "  " << suml << " " << sumr << endl;
             }   
        }
        
        
        return ans;
    }
};