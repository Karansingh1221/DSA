class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> visited=grid;
        queue<pair<int,int>> q;
        int countOrange=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(visited[i][j]==2){
                    q.push({i,j});
                }
                if(visited[i][j]==1){
                    countOrange++;
                }
            }
        }
        if(countOrange==0) return 0;
        if(q.empty()) return -1;
        int minutes=-1;
        vector<pair<int,int>> dir={{1,0},{0,1},{-1,0},{0,-1}};
        while(!q.empty()){
            int s=q.size();
            for(int k=0;k<s;k++){
                auto [x,y]=q.front();
                q.pop();
                for(auto [dx,dy]:dir){
                    int i=x+dx;
                    int j=y+dy;
                    if(i>=0 && i<m && j>=0 && j<n && visited[i][j]==1){
                        visited[i][j]=2;
                        countOrange--;
                        q.push({i,j});
                    }
                }
            }
            minutes++;
        }        
        if(countOrange==0) return minutes;
        return -1;;
    }
};