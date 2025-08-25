class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int count=m*n;
        vector<int> res(count,0);
        int ind=0;
        int row=0,col=0;
        int dirs=0;
        while(ind<count){
            res[ind]=mat[row][col];
            if(dirs==0){
                if(col==n-1){
                    dirs=1;
                    row++;
                }
                else if(row==0){
                    dirs=1;
                    col++;
                }
                else{
                    row--;
                    col++;
                }
            }
            else{
                if(row==m-1){
                    dirs=0;
                    col++;
                }
                else if(col==0){
                    dirs=0;
                    row++;
                }
                else{
                    row++;
                    col--;
                }
            }
            ind++;
        }
        return res;
    }
};