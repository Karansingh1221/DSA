class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        queue<pair<int,int>> q;
        vector<vector<int>> dup(m,vector<int>(n,INT_MAX));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    dup[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        vector<pair<int,int>> dirs={{1,0},{0,1},{-1,0},{0,-1}};
        while(!q.empty()){
            auto [x,y]=q.front();
            q.pop();
            for(auto [dx,dy]:dirs){
                int nx=x+dx,ny=y+dy;
                if(nx>=0 && nx<m && ny>=0 && ny<n){
                    if(dup[nx][ny]>dup[x][y]+1){
                        dup[nx][ny]=dup[x][y]+1;
                        q.push({nx,ny});
                    }
                }
            }
        }
        return dup;
    }
};