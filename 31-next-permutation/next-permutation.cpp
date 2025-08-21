class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int ind=n-1;
        for(int i=n-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                ind=i-1;
                break;
            }
        }
        if(ind==n-1) {
            reverse(nums.begin(),nums.end());
        }
        else{
            int mini=INT_MAX;
            int sin=-1;
            for(int i=ind+1;i<n;i++){
                if(nums[i]>nums[ind] && mini>= nums[i]){
                    mini=nums[i];
                    sin=i;
                }
            }
            swap(nums[ind],nums[sin]);
            reverse(nums.begin()+ind+1,nums.end());
        }
    }
};