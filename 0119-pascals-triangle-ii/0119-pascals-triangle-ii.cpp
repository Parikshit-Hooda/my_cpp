class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex==0) return {1};
        if(rowIndex==1) return {1,1};
        vector<int> result(rowIndex+1, 1);
        int m=rowIndex/2;  //getting the mid element index as it's zero based index. Had it been N given then (N+1)/2
        result[1]=rowIndex;
        for(int i=2; i<=m; i++ ){
            result[i] =( ((long)result[i-1]) * (rowIndex-i+1) )/i; //(used (long) to avoid Integer OverFlow)
        }
        int r=rowIndex;
        int l=0;
        while(r>l) result[r--]=result[l++]; // rth value to (N-r)
        return result;
        
    }
};