class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        // if(n<=1) return -1;
        // int ans=-1;
        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]<nums[j]){
        //             ans=max(ans,nums[j]-nums[i]);
        //         }
        //     }
        // }
        // return ans;

        int mini=nums[0];
        int ans=-1;
        for(int i=1;i<n;i++){
            if(mini>nums[i]){
                mini=nums[i];
            }else if(nums[i]>mini){
                ans=max(ans,nums[i]-mini);
            }
        }
        return ans;
    }
};