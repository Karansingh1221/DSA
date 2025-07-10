class Solution {
public:
    bool check(vector<int>& diff,int i){
        int n=diff.size();
        int res=diff[i];
        int temp=i+1;
        while((temp%n)!=i){
            if(res<0) return false;
            res+=diff[temp%n];
            temp++;
        }
        return true;
    }
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        vector<int> diff(n);
        for(int i=0;i<n;i++){
            diff[i]=gas[i]-cost[i];
        }
        int sum=accumulate(diff.begin(),diff.end(),0);
        if(sum<0) return -1;
        for(int i=0;i<n;i++){
            if(diff[i]>0 && check(diff,i)){
                return i;
            }
        }
        return 0;
    }
};