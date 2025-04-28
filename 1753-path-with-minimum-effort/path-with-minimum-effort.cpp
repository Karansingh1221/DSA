class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int m=heights.size();
        int n=heights[0].size();
        vector<vector<int>> eff(m,vector<int>(n,INT_MAX));
        eff[0][0]=0;
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,
        pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
        pq.push({0,{0,0}});
        vector<pair<int,int>> dirs={{1,0},{0,1},{-1,0},{0,-1}};
        while(!pq.empty()){
            auto [effort,cords]=pq.top();
            pq.pop();
            int x=cords.first;
            int y=cords.second;    
            if(x==m-1 && y==n-1) return effort;
            for(auto [p,q]:dirs){
                int nx=p+x;
                int ny=q+y;
                if(nx<m && nx>=0 && ny>=0 && ny<n){
                    int nexteffort=max(effort,abs(heights[x][y]-heights[nx][ny]));
                    if(nexteffort<eff[nx][ny]){
                        eff[nx][ny]=nexteffort;
                        pq.push({nexteffort,{nx,ny}});
                    }
                }
            }     
        }
        return -1;
    }
};