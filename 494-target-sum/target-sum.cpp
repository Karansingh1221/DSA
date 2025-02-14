class Solution {
public:
    int count=0;
    void check(vector<int>& nums,int index,int sum,int target){
        if(index==nums.size()){
            if(sum==target){
                count+=1;
            }
            return;
        }
        // cout<<sum<<endl;
        check(nums,index+1,sum+nums[index],target);
        check(nums,index+1,sum-nums[index],target);
        return;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        check(nums,0,0,target);
        return count;
    }
};