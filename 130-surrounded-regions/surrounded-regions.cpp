class Solution {
public:
    void dfs(vector<vector<char>>& board,int i,int j,vector<vector<bool>> &visited){
        int m=board.size();
        int n=board[0].size();
        if(i<0 || i>=m || j<0 || j>=n) return;
        vector<pair<int,int>> dirs={{1,0},{0,1},{-1,0},{0,-1}};
        for(auto pair:dirs){
            int dx=i+pair.first;
            int dy=j+pair.second;
            if(dx>=0 && dx<m && dy>=0 && dy<n &&  !visited[dx][dy] && board[dx][dy]=='O'){
                 visited[dx][dy]=true;
                dfs(board,dx,dy,visited);
                }
        }
    }
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        if(m==1 || n==1) return;
        vector<vector<bool>> visited(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            if(board[i][0]=='O'){
                visited[i][0]=true;
                dfs(board,i,0,visited);
            }
            if(board[i][n-1]=='O'){
                visited[i][n-1]=true;
                dfs(board,i,n-1,visited);
            }
        }
        for(int i=0;i<n;i++){
            if(board[0][i]=='O'){
                visited[0][i]=true;
                dfs(board,0,i,visited);
            }
            if(board[m-1][i]=='O'){
                visited[m-1][i]=true;
                dfs(board,m-1,i,visited);
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!visited[i][j]) board[i][j]='X';
            }
        }
    }
};