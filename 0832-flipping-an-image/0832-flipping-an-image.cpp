class Solution {
public:
    
    void swap(int &a1, int &a2) {
        int temp = a1;
        a1 = a2;
        a2 = temp;
    }
    
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        for(int i = 0; i < image.size(); i++) {
            vector<int> row = image[i];
            int rowsize = row.size();
            int l = 0, r = rowsize-1;
            while(l < r) {
                swap(row[l++], row[r--]);
            }
            image[i] = row;
        } //flip
        
        
        for(int i = 0; i < image.size(); i++) {
            vector<int> row = image[i];
            for(int j = 0; j < row.size(); j++) {
                int ele = image[i][j];
                image[i][j] = (ele == 0) ? 1 : 0;
            }
        } //invert
        
        return image;
    }
};