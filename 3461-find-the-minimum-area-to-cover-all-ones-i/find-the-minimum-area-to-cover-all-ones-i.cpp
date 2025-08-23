class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int row1=m,row2=0,col1=n,col2=0;
        bool flag=false;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    flag=true;
                    row1=min(i,row1);
                    row2=max(i,row2);
                    col1=min(j,col1);
                    col2=max(j,col2);
                }
            }
        }
        if(flag==false) return 0;
        return ((col2-col1)+1)*((row2-row1)+1);
    }
};