class Solution {
public:
    // void solve(vector<int>& nums,int left,int right){
    //     for(int i=left;i<=right;i++){
    //         if(nums[i]!=0){
    //             nums[i]-=1;
    //         }
    //     }
    // }
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        // for(int i=0;i<queries.size();i++){
        //     solve(nums,queries[i][0],queries[i][1]);
        // }
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]!=0){
        //         return false;
        //     }
        // }
        // return true;
        int n=nums.size();
        int m=queries.size();
        vector<int> cmp(n+1,0);
        for(auto q:queries){
            cmp[q[0]]++;
            if(q[1]+1<n) cmp[q[1]+1]--;
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            cnt+=cmp[i];
            if(nums[i]>cnt) return false;
        }
        return true;
           
    }
};