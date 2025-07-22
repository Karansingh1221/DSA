class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        unordered_map<int,int> mp;
        int n=nums.size();
        int left=0;
        int right=0;
        int sum=0;
        int ans=0;
        while(right<n){
            if(mp.empty()){
                sum+=nums[right];
                mp[nums[right]]=right;
            }else if(mp.find(nums[right])!=mp.end()){
                while(left<=mp[nums[right]]){
                    sum-=nums[left];
                    mp.erase(nums[left]);
                    left++;
                }
                sum+=nums[right];
                mp[nums[right]]=right;
            }else{
                sum+=nums[right];
                mp[nums[right]]=right;
            }
            ans=max(ans,sum);
            right++;
        }
        return ans;
    }
};