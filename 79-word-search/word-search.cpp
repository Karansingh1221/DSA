class Solution {
public:
    bool dfs(vector<vector<char>>& board, string word,int i,int j,int ind){
        int m=board.size();
        int n=board[0].size();
        if(ind==word.size()) return true;
        if(i<0 || i>=m || j<0 || j>=n || word[ind]!=board[i][j]) return false;
        char temp=board[i][j];
        board[i][j]='*';
        vector<pair<int,int>> dirs={{0,1},{1,0},{-1,0},{0,-1}};
        for(auto pair: dirs){
            int ni=i+pair.first;
            int nj=j+pair.second;
            if(dfs(board,word,ni,nj,ind+1)){
                return true;
            }
        }
        board[i][j]=temp;
        return false;        
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0]){
                    if(dfs(board,word,i,j,0)) return true;
                }
            }
        }
        return false;
    }
};