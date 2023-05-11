class Solution {
    
public:
string tictactoe(vector<vector<int>>& moves) {
        int row[2][3]={},col[2][3]={},d1[2]={},d2[2]={},id=0;
        for(auto i:moves){
                if(++row[id][i[0]]==3 || ++col[id][i[1]]==3 ||  i[0]==i[1] && ++d1[id]==3 || i[0]+i[1]==2 && ++d2[id]==3)
                    return id==0?"A":"B";
            id=id==0?1:0;
            }
        return moves.size()==9?"Draw":"Pending";
    }
};