class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int cnt=0;
        int maxi=*max_element(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(maxi==nums[i]){
                cnt++;
                ans=max(ans,cnt);
            }else{
                cnt=0;
            }
        }   
        return ans;
    }
};