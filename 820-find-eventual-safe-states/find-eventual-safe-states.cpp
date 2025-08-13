class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int> topo;
        int n=graph.size();
        vector<int> outdegree(n);
        vector<vector<int>> adj(n);
        for(int i=0;i<n;i++){
            for(int j:graph[i]){
                adj[j].push_back(i);
                outdegree[i]++;
            }
        }
        queue<int> q;
        for(int i=0;i<n;i++){
            if(outdegree[i]==0) q.push(i);
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            topo.push_back(node);
            for(int i:adj[node]){
                outdegree[i]--;
                if(outdegree[i]==0) q.push(i);
            }
        }
        sort(topo.begin(),topo.end());
        return topo;
    }
};