class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int n=nums.size();
        if(n<3) return 0;
        int count=0;
        int left=0,right=2;
        while(right<n){
            int sum=nums[left]+nums[right];
            if(2*sum==nums[left+1]){
                count++;
            }
            left++;
            right++;
        }
        return count;
    }
};