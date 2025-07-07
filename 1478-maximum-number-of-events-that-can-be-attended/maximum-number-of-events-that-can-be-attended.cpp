class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        sort(events.begin(),events.end());
        // int maxi=-1;
        // for(int i=0;i<events.size();i++){
        //     maxi=max(maxi,max(events[i][0],events[i][1]));
        // }
        // vector<int> visited(maxi+1,false);
        // priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        // for(int i=0;i<events.size();i++){
        //     pq.push({events[i][1],events[i][0]});
        // }
        // int count=0;
        // while(!pq.empty()){
        //     auto pair=pq.top();
        //     pq.pop();
        //     for(int i=pair.second;i<=pair.first;i++){
        //         if(!visited[i]){
        //             visited[i]=true;
        //             count++;
        //             break;
        //         }
        //     }
        // }
        // return count;


        int n=events.size();
        int day=0;
        int count=0;
        int index=0;
        priority_queue<int,vector<int>,greater<int>> pq;
        while(!pq.empty() || index<n){
            if(pq.empty()){
                day=events[index][0];
            }
            while(index<n && events[index][0]<=day){
                pq.push(events[index][1]);
                index++;
            }
            pq.pop();
            day++;
            count++;
            while(!pq.empty() && pq.top()<day){
                pq.pop();
            }
        }
        return count;
    }
};