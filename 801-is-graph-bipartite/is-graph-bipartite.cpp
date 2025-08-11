class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int m=graph.size();
        vector<int> col(m,-1);
        int start=0;
        col[start]=1;
        queue<int> q;
        for(int j=0;j<m;j++){
        q.push(j);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(int i:graph[node]){
                if(col[i]==-1){
                    col[i]=!col[node];
                    q.push(i);
                }
                if(col[i]==col[node]) return false;
            }
        }  
        }    
        return true;
    }
};