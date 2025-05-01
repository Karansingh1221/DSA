class Solution {
public:
    bool check(vector<int>& tasks, vector<int>& workers, int pills, int strength,int mid){
        multiset<int> total(workers.end()-mid,workers.end());
        int remaining_pills=pills;
        for(int i=mid-1;i>=0;i--){
            int task=tasks[i];
            auto it=total.lower_bound(task);
            if(it!=total.end()){
                total.erase(it);
            }else{
                if(remaining_pills==0) return false;
                it= total.lower_bound(task-strength);
                if(it==total.end()) return false;
                total.erase(it);
                remaining_pills--;
            }
        }
        return true;
    }
    int maxTaskAssign(vector<int>& tasks, vector<int>& workers, int pills, int strength) {
        sort(tasks.begin(),tasks.end());
        sort(workers.begin(),workers.end());
        int count=-1;
        int low=0,high=min(tasks.size(),workers.size());
        while(low<=high){
            int mid=low+(high-low)/2;
            if(check(tasks,workers,pills,strength,mid)){
                count=mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return count;
        
    }
};