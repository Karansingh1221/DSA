class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> pre(n);
        vector<int> suff(n);
        int prepro=1;
        for(int i=0;i<n;i++){
            pre[i]=prepro;
            prepro*=nums[i];
        }
        int sufpro=1;
        for(int i=n-1;i>=0;i--){
            suff[i]=sufpro;
            sufpro*=nums[i];
        }
        for(int i=0;i<n;i++){
            nums[i]=pre[i]*suff[i];
        }
        return nums;
    }
};