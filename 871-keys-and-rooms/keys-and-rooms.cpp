class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool> visited(n,false);
        queue<int> q;
        visited[0]=true;
        q.push(0);
        while(!q.empty()){
            int room=q.front();
            q.pop();
            for(int num:rooms[room]){
                if(!visited[num]){
                    visited[num]=true;
                    q.push(num);
                }
            }
        }
        for(int i=0;i<n;i++){
            if(!visited[i])return false;
        }
        return true;
    }
};