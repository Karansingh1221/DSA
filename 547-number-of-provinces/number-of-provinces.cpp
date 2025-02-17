class Solution {
public:
    void dfs(vector<vector<int>>& isConnected,vector<bool>& visited,int i){
        visited[i]=true;
        for(int j=0;j<isConnected[i].size();j++){
            if(isConnected[i][j]==1 && visited[j]==false){
                visited[j]=true;
                dfs(isConnected,visited,j);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int m=isConnected.size();
        int count=0;
        vector<bool> visited(m,false);
        for(int i=0;i<m;i++){
            if(visited[i]==false){
                count++;
                dfs(isConnected,visited,i);
            }
        }
        return count;
    }
};