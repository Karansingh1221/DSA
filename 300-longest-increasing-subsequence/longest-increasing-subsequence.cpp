class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n,1);
        for(int i=1;i<n;i++){
            for(int prev=0;prev<i;prev++){
                if(nums[i]>nums[prev] && result[i]<result[prev]+1){
                    result[i]=result[prev]+1;
                }
            }
        }
        return *max_element(result.begin(),result.end());        
    }
};