class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int time=0;
        priority_queue<int> pq;
        vector<int> alphabet(26,0);
        for(char c:tasks){
            alphabet[c-'A']++;
        }
        for(int i=0;i<26;i++){
            if(alphabet[i]) pq.push(alphabet[i]);
        }
        while(!pq.empty()){
            vector<int> remain;
            int cycle=n+1;
            while(cycle>0
             && !pq.empty()){
                int max_freq=pq.top();
                pq.pop();
                if(max_freq>1){
                    remain.push_back(max_freq-1);
                }
                time++;
                cycle--;
            }
            for(int r:remain){
                pq.push(r);
            }
            if(pq.empty()) break;
            time+=cycle;
        }
        return time;
    }
};