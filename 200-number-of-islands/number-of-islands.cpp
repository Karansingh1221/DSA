class Solution {
public:
    void dfs(vector<vector<char>>& grid,int i,int j){
        int m=grid.size();
        int n=grid[0].size();
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]=='0'){
            return;
        }
        grid[i][j]='0';
        dfs(grid,i+1,j);
        dfs(grid,i,j+1);
        dfs(grid,i-1,j);
        dfs(grid,i,j-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int island_count=0;
        int m=grid.size();
        int n=grid[0].size();
        // vector<pair<int,int>> dirs={{1,0},{0,1},{-1,0},{0,-1}};
        // queue<pair<int,int>> q;
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         if(grid[i][j]=='1'){
        //             island_count++;
        //             q.push({i,j});
        //             while(!q.empty()){
        //                 int a=q.front().first;
        //                 int b=q.front().second;
        //                 q.pop();
        //                 grid[a][b]='0';
        //                 for(auto [x,y]:dirs){
        //                     int dx=a+x;
        //                     int dy=b+y;
        //                     if(dx>=0 && dx<m && dy>=0 && dy<n && grid[dx][dy]=='1'){
        //                         grid[dx][dy]='0';
        //                         q.push({dx,dy});
        //                     }
        //                 }
        //             }
        //         }
        //     }
        // }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    island_count++;
                    dfs(grid,i,j);
                }
            }
        }
        return island_count;
    }



    // int numIslands(vector<vector<char>>& grid) {
    //     int island_count=0;
    //     for(int i=0;i<grid.size();i++){
    //         for(int j=0;j<grid[0].size();j++){
    //             if(grid[i][j]=='1'){
    //                 island_count++;
    //                 dfs(grid,i,j);
    //             }
    //         }
    //     }        
    //     return island_count;
    // }
    // void dfs(vector<vector<char>>& grid,int i,int j){
    //     if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]=='0'){
    //         return;
    //     }
    //     vector<pair<int,int>> dirs={{0,1},{1,0},{-1,0},{0,-1}};
    //     grid[i][j]='0';
    //     for(auto [x,y]:dirs){
    //         int dx=i+x;
    //         int dy=j+y;
    //         dfs(grid,dx,dy);
    //     }
    //     return;
    // }
};