class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int count=0;
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int i=0;
        int j=0;
        while(i<players.size() && j<trainers.size()){
            if(players[i]>trainers[j]) j++;
            else if(players[i]<=trainers[j]){
                i++;
                j++;
                count++;
            }
        }        
        return count;
        // priority_queue<int> pq1;
        // priority_queue<int> pq2;
        // for(int num:players){
        //     pq1.push(num);
        // }
        // for(int num:trainers){
        //     pq2.push(num);
        // }
        // while(!pq1.empty() && !pq2.empty()){
        //     if(pq1.top()<=pq2.top()){
        //         pq1.pop();
        //         pq2.pop();
        //         count++;
        //     }
        //     else if(pq1.top()>pq2.top()){
        //         pq1.pop();
        //     }
        // }
        // return count;

    }
};