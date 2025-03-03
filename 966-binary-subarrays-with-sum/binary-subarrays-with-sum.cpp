class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal){
        return solve(nums,goal)-solve(nums,goal-1);       
    }
    int solve(vector<int>&nums,int goal){
        if(goal<0) return 0;
        int left=0,sum=0,count=0;
        for(int right=0;right<nums.size();right++){
            sum+=nums[right];
            while(sum>goal){
                sum-=nums[left];
                left++;
            }
            count+=(right-left+1);
        }
        return count;
    }
};