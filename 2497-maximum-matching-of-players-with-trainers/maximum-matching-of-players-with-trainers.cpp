class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int count=0;
        priority_queue<int> pq1;
        priority_queue<int> pq2;
        for(int num:players){
            pq1.push(num);
        }
        for(int num:trainers){
            pq2.push(num);
        }
        while(!pq1.empty() && !pq2.empty()){
            if(pq1.top()<=pq2.top()){
                pq1.pop();
                pq2.pop();
                count++;
            }
            else if(pq1.top()>pq2.top()){
                pq1.pop();
            }
        }
        return count;

    }
};