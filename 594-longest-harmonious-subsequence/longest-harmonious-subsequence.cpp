class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==1) return 0;
        int left=0;
        int right=1;
        int ans=0;
        while(right<n && left<=right){
            if((nums[right]-nums[left])>1){
                left++;
            }
            if(nums[right]-nums[left]==1){
                ans=max(ans,right-left+1);
            }
            right++;
        }
        return ans;
    }
};