class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans=-1;
        int mindif=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int diff=abs(nums[i]);
            if(mindif>diff||(mindif==diff && ans<nums[i])){
                mindif=diff;
                ans=nums[i];
            }
        }
        return ans;
    }
};