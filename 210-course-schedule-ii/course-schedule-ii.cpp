class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& p) {
        vector<int> topo;
        vector<int> indegree(n);
        for(auto i:p){
            indegree[i[0]]++;
        }
        vector<vector<int>> adj(n);
        for(auto i:p){
            adj[i[1]].push_back(i[0]);
        }
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0) q.push(i);
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            topo.push_back(node);
            for(int i:adj[node]){
                indegree[i]--;
                if(indegree[i]==0) q.push(i);
            }
        }
        vector<int> t;
        return topo.size()==n ? topo : t;
    }
};