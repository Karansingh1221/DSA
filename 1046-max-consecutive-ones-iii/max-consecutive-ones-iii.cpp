class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0,right=0,count=0,ans=0;
        int n=nums.size();
        while(right<n){
            if(nums[right]==0){
                k--;
            }
            while(k<0){
                if(nums[left]==0){
                    k++;
                }
                left++;
            }
            ans=max(right-left+1,ans);
            right++;
        }
        return ans;
    }
};