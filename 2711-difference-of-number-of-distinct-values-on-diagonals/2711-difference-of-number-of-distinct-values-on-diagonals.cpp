class Solution {
public:
    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) {
      int m=grid.size(), n=grid[0].size();
        vector<vector<int>>ans(m, vector<int>(n,0));
        
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                int col=j+1, row=i+1, bottom_right=0, top_left=0;
                unordered_set<int>st;
               
                while(col < n and row < m) {
                    
                    st.insert(grid[row][col]);
                    col++;row++;
                }
                bottom_right=st.size();
                st.clear();
                col=j-1;  row=i-1;
                
                while(col >=0 and row >=0) {
                    
                    st.insert(grid[row][col]);
                    col--;row--;
                }
                top_left=st.size();
                st.clear();
                ans[i][j]=abs(top_left-bottom_right);
              
            }
        }
        return ans;
    }
};