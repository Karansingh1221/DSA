class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()==1) return 0;
        for(int i=1;i<n;i++){
            nums[i]=max(nums[i]+i,nums[i-1]);
        }
        int jumps=0;
        int ind=0;
        while(ind<n-1){
            jumps++;
            ind=nums[ind];
        }
        return jumps;
    }
};