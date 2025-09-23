class Solution {
public:
    void dfs(vector<vector<char>>& grid,int i,int j){
        int m=grid.size();
        int n=grid[0].size();
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]=='0') return;
        grid[i][j]='0';
        vector<pair<int,int>> dirs={{1,0},{0,1},{-1,0},{0,-1}};
        for(auto p:dirs){
            int x=i+p.first;
            int y=j+p.second;
            dfs(grid,x,y);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int count=0;
        vector<vector<bool>> visited(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    count++;
                    visited[i][j]=true;
                    dfs(grid,i,j);
                }
            }
        }
        return count;
    }
};