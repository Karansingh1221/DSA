class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++){
            nums[i]=max(nums[i]+i,nums[i-1]);
        }
        int ans=0;
        int ind=0;
        while(ind<n-1){
            ans++;
            ind=nums[ind];
        }
        return ans;
        
    }
};