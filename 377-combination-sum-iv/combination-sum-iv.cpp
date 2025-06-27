class Solution {
public:
    // int fact(int n){
    //     if(n<=1) return n;
    //     return n*fact(n-1);
    // }
    // int permutation(int n,int r){
    //     return fact(n)/fact(n-r);
    // }
    // void solve(vector<int>& nums,int target,int ind,int& count,int sum){
    //     if(sum==target){
    //         count+=permution(,per);
    //         return;
    //     }
    //     if(ind>=nums.size() || sum>target) return;
    //     if(sum+nums[ind]<=target){
    //         sum+=nums[ind];
    //         solve(nums,target,ind,count,sum);
    //         sum-=nums[ind];
    //     }
    //     solve(nums,target,ind+1,count,sum);
    // }
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned int> dp(target+1,0);
        dp[0]=1;
        for(int i=1;i<=target;i++){
            for(int num:nums){
                if(i>=num){
                    dp[i]+=dp[i-num];
                }
            }
        }
        return dp[target];
    }
};