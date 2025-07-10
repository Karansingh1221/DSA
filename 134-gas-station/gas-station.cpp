class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start=0;
        int n=gas.size();
        int tank=0;
        int total_gas=0;
        int total_cost=0;
        for(int i=0;i<n;i++){
            total_gas+=gas[i];
            total_cost+=cost[i];
            tank+=gas[i]-cost[i];
            if(tank<0) {
                start=i+1;
                tank=0;
            }
        }
        return (total_gas<total_cost)?-1:start;
    }
};



// Optimized Brute Force
// class Solution {
// public:
//     bool check(vector<int>& diff,int i){
//         int n=diff.size();
//         int res=diff[i];
//         int temp=i+1;
//         while((temp%n)!=i){
//             if(res<0) return false;
//             res+=diff[temp%n];
//             temp++;
//         }
//         return true;
//     }
//     int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//         int n=gas.size();
//         vector<int> diff(n);
//         for(int i=0;i<n;i++){
//             diff[i]=gas[i]-cost[i];
//         }
//         int sum=accumulate(diff.begin(),diff.end(),0);
//         if(sum<0) return -1;
//         for(int i=0;i<n;i++){
//             if(diff[i]>0 && check(diff,i)){
//                 return i;
//             }
//         }
//         return 0;
//     }
// };