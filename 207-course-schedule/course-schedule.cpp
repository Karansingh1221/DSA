class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        // vector<int> topo;
        int count=0;
        vector<int> indegree(numCourses);
        for(int i=0;i<prerequisites.size();i++){
            indegree[prerequisites[i][0]]++;
        }
        queue<int> q;
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0) q.push(i);
        }
        vector<vector<int>> adj(numCourses);
        for(auto v:prerequisites){
            adj[v[1]].push_back(v[0]);
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            // topo.push_back(node);
            count++;
            for(int i:adj[node]){
                indegree[i]--;
                if(indegree[i]==0) q.push(i);
            }
        }
        if(count==numCourses) return true;
        return false;
    }
};