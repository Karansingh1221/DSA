class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left=0,right=0,ans=0,count=0;
        int n=nums.size();
        while(right<n){
            if(nums[right]==0){
                count++;
            }
            while(count>1){
                if(nums[left]==0){
                    count--;
                }
                left++;
            }
            ans=max(ans,right-left);
            right++;
        }        
        return ans;
    }
};