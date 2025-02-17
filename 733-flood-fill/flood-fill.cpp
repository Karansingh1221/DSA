class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> res=image;
        int m=image.size();
        int n=image[0].size();
        queue<pair<int,int>> q;
        vector<pair<int,int>> dir={{1,0},{0,1},{-1,0},{0,-1}};
        q.push({sr,sc});
        int oc=res[sr][sc];
        if(oc==color) return res;
        res[sr][sc]=color;
        while(!q.empty()){
            int size=q.size();
            for(int k=0;k<size;k++){
                auto [x,y]=q.front();
                q.pop();
                for(auto [dx,dy]:dir){
                    int i=x+dx;
                    int j=y+dy;
                    if(i>=0 && i<m && j>=0 && j<n && res[i][j]==oc){
                        res[i][j]=color;
                        q.push({i,j});
                    }
                }
            }
        }
        return res;
    }
};