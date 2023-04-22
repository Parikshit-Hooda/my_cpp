class Solution {
    public:
    vector<vector<int>> imageSmoother(vector<vector<int>> M) {
        int R = M.size(), C = M[0].size();
       // vector<vector<int>> ans = new int[R][C];
        vector<vector<int>> ans(R, vector<int> (C,0));

        for (int r = 0; r < R; ++r)
            for (int c = 0; c < C; ++c) {
                int count = 0;
                for (int nr = r-1; nr <= r+1; ++nr)
                    for (int nc = c-1; nc <= c+1; ++nc) {
                        if (0 <= nr && nr < R && 0 <= nc && nc < C) {
                            ans[r][c] += M[nr][nc];
                            count++;
                        }
                    }
                ans[r][c] /= count;
            }
        return ans;
    }
};

// class Solution {
// public:
// 	vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
// 		int m=img.size();
// 		int n=img[0].size();
// 		vector<vector<int>>mat=img;
// 		for(int i=0;i<m;i++){
// 			for(int j=0;j<n;j++){
// 				int sum=img[i][j];
// 				int count=1;
// 				if(i-1>=0){
// 					sum+=img[i-1][j];
// 					count++;
// 					if(j+1<n){
// 						sum+=img[i-1][j+1];
// 						count++;
// 					}
// 					if(j-1>=0){
// 						sum+=img[i-1][j-1];
// 						count++;
// 					}
// 				}
// 				if(i+1<m){
// 					sum+=img[i+1][j];
// 					count++;
// 					if(j-1>=0){
// 						sum+=img[i+1][j-1];
// 						count++;
// 					}
// 					if(j+1<n){
// 						sum+=img[i+1][j+1];
// 						count++;
// 					}
// 				}
// 				if(j-1>=0){
// 					sum+=img[i][j-1];
// 					count++;
// 				}
// 				if(j+1<n){
// 					sum+=img[i][j+1];
// 					count++;
// 				}
// 				mat[i][j]=(int)(sum/count);
// 			}
// 		}
// 		return mat;
// 	}
// };