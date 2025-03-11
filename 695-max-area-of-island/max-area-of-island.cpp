class Solution {
public:
    void dfs(vector<vector<int>>& grid,int i,int j,int& count){
        int m=grid.size();
        int n=grid[0].size();
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]==0){
            return;
        }
        count++;
        grid[i][j]=0;
        vector<pair<int,int>> dirs={{1,0},{0,1},{-1,0},{0,-1}};
        for(auto [x,y]:dirs){
            dfs(grid,i+x,j+y,count);
        }
        return;

    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int count=0;
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    dfs(grid,i,j,count);
                }
                ans=max(ans,count);
                count=0;
            }
        }
        return ans;
        
    }
};