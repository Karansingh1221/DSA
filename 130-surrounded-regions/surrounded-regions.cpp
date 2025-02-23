class Solution {
public:
    void dfs(vector<vector<bool>>& visited, vector<vector<char>>& board, int i, int j) {
    int m = board.size();
    int n = board[0].size();
    
    // Base condition to prevent out-of-bounds access
    if (i < 0 || i >= m || j < 0 || j >= n || visited[i][j] || board[i][j] != 'O') {
        return;
    }

    visited[i][j] = true;

    vector<pair<int, int>> dirs = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    for (auto [x, y] : dirs) {
        int a = i + x;
        int b = j + y;
        dfs(visited, board, a, b);
    }
}

    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<bool>> visited(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            if(board[i][0]=='O' && visited[i][0]==false){
                dfs(visited,board,i,0);
            }
            if(board[i][n-1]=='O' && visited[i][n-1]==false){
                dfs(visited,board,i,n-1);
            }
        }
        for(int j=0;j<n;j++){
            if(board[0][j]=='O' && visited[0][j]==false){
                dfs(visited,board,0,j);
            }
            if(board[m-1][j]=='O' && visited[m-1][j]==false){
                dfs(visited,board,m-1,j);
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(visited[i][j]==false){
                    board[i][j]='X';
                }
            }
        }

    }
};