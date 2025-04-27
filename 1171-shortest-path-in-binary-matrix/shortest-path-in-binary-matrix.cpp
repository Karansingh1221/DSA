class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]==1) return -1;
        queue<pair<int,int>> que;
        que.push({0,0});
        grid[0][0]=1;
        vector<pair<int,int>> dirs={{-1,0},{0,-1},{1,0},{0,1},{1,1},{-1,-1},{-1,1},{1,-1}};
        int ans=1;
        int n=grid.size();
        while(!que.empty()){
            int m=que.size();
            for(int i=0;i<m;i++){
                int x=que.front().first;
                int y=que.front().second;
                que.pop();
                if(x==n-1 && y==n-1) return ans;
                for(auto [a,b]:dirs){
                    int p=x+a;
                    int q=y+b;
                    if(p>=0 && p<=n-1 && q>=0 && q<=n-1 && grid[p][q]==0){
                        grid[p][q]=1;
                        que.push({p,q});
                    }
                }
            }
            ans++;
        }  
        return -1;  
    }
};