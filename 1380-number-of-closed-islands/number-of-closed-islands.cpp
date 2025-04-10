class Solution {
public:
    void dfs(vector<vector<int>>& grid,vector<vector<bool>>& visited,int i,int j){
        int m=grid.size();
        int n=grid[0].size();
        if(i<0 || i>=m || j<0 || j>=n|| grid[i][j]==1 || visited[i][j]==true){
            return ;
        }
        visited[i][j]=true;
        vector<pair<int,int>> dirs={{1,0},{0,1},{-1,0},{0,-1}};
        for(auto [x,y]:dirs){
            dfs(grid,visited,i+x,j+y);
        }
    }
    int closedIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int count=0;
        vector<vector<bool>> visited(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            if(grid[i][0]==0 && visited[i][0]==false) dfs(grid,visited,i,0);
            if(grid[i][n-1]==0 && visited[i][n-1]==false) dfs(grid,visited,i,n-1);
        }
        for(int i=0;i<n;i++){
            if(grid[0][i]==0 && visited[0][i]==false) dfs(grid,visited,0,i);
            if(grid[m-1][i]==0 && visited[m-1][i]==false) dfs(grid,visited,m-1,i);
        }
        for(int i=1;i<m-1;i++){
            for(int j=1;j<n-1;j++){
                if(visited[i][j]==false && grid[i][j]==0){
                    count++;
                    dfs(grid,visited,i,j);
                }
            }
        }    
        return count;             
    }
};