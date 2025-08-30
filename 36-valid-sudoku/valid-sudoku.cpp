class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // vector<vector<bool>> row(9,vector<bool>(9,false));
        // vector<vector<bool>> col(9,vector<bool>(9,false));
        // vector<vector<bool>> box(9,vector<bool>(9,false));
        // for(int i=0;i<9;i++){
        //     for(int j=0;j<9;j++){
        //         if(board[i][j]!='.'){
        //             int num=board[i][j]-'1';
        //             int boxno=(i/3)*3+(j/3);
        //             if(row[i][num] || col[j][num] || box[boxno][num]) return false;
        //             row[i][num]=col[j][num]=box[boxno][num]=true;
        //         }
        //     }
        // }
        // return true;

        for(int i=0;i<9;i++){
            vector<bool> seen(9,false);
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    continue;
                }
                int num=board[i][j]-'1';
                if(seen[num]) return false;
                seen[num]=true;
            }
        }
        for(int i=0;i<9;i++){
            vector<bool> seen(9,false);
            for(int j=0;j<9;j++){
                if(board[j][i]=='.'){
                    continue;
                }
                int num=board[j][i]-'1';
                if(seen[num]) return false;
                seen[num]=true;
            }
        }

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                vector<bool> seen(9,false);
                for(int x=0;x<3;x++){
                    for(int y=0;y<3;y++){
                        int row=i*3+x;
                        int col=j*3+y;
                        if(board[row][col]=='.') continue;
                        int num=board[row][col]-'1';
                        if(seen[num]) return false;
                        seen[num]=true;
                    }
                }
            }
        }
        return true;
    }
};