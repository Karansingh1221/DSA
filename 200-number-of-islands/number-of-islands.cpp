class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int island_count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    island_count++;
                    dfs(grid,i,j);
                }
            }
        }        
        return island_count;
    }
    void dfs(vector<vector<char>>& grid,int i,int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]=='0'){
            return;
        }
        vector<pair<int,int>> dirs={{0,1},{1,0},{-1,0},{0,-1}};
        grid[i][j]='0';
        for(auto [x,y]:dirs){
            int dx=i+x;
            int dy=j+y;
            dfs(grid,dx,dy);
        }
        return;
    }
};