class Solution {
public:
    int triangularSum(vector<int>& nums) {
        while(nums.size()>1){
            vector<int> arr;
            for(int i=1;i<nums.size();i++){
                int sum=nums[i]+nums[i-1];
                arr.push_back(sum%10);
            }
            nums=arr;
        }        
        return nums[0];
    }
};