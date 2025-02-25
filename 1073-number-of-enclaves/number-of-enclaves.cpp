class Solution {
public:
    void dfs(vector<vector<int>>& grid,vector<vector<bool>>& visited,int i,int j){
        int m=grid.size();
        int n=grid[0].size();
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]!=1 ||visited[i][j]){
            return;
        }
        visited[i][j]=true;
        vector<pair<int,int>> dirs={{1,0},{0,1},{-1,0},{0,-1}};
        for(auto [x,y] : dirs){
            dfs(grid,visited,x+i,y+j);
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<bool>> visited(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            if(grid[i][0]==1 && !visited[i][0]){
                dfs(grid,visited,i,0);
            }
            if(grid[i][n-1]==1 && !visited[i][n-1]){
                dfs(grid,visited,i,n-1);
            }
        }
        for(int j=0;j<n;j++){
            if(grid[0][j]==1 && !visited[0][j]){
                dfs(grid,visited,0,j);
            }
            if(grid[m-1][j]==1 && !visited[m-1][j]){
                dfs(grid,visited,m-1,j);
            }
        }
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && visited[i][j]==false){
                    count++;
                }
            }
        }
        return count;
    }
};