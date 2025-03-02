class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        // vector<int> diff(n);
        // vector<bool> res(n,true);
        // for(int i=0;i<n;i++){
        //     diff[i]=gas[i]-cost[i];
        // }        
        // int ans=-1;
        // int i=0;
        // while(i<n){
        //     int sum=diff[i];
        //     int j;
        //     if(i==n-1){j=0;}
        //     else{j=i+1;}
        //     while(j!=i){
        //         if(sum<0){
        //             res[i]=false;
        //             break;
        //         }
        //         sum+=diff[j];
        //         if(j==n-1){
        //             j=0;
        //         }else{
        //             j++;
        //         }
                
        //     }
        //     if(j==i && sum>=0) return i;
        //     i++;
        // }

        // return -1;



        int total_tank=0,curr_tank=0,start_index=0;
        for(int i=0;i<n;i++){
            int bal=gas[i]-cost[i];
            total_tank+=bal;
            curr_tank+=bal;
            if(curr_tank<0){
                start_index=i+1;
                curr_tank=0;
            }
        }
        return total_tank>=0 ? start_index:-1;
    }
};