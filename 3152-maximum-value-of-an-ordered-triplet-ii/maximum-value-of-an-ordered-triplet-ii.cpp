class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long ans=0;
        int n=nums.size();
        vector<int> pre(n),suf(n);
        pre[0]=nums[0];
        suf[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            pre[i]=max(nums[i],pre[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            suf[i]=max(nums[i],suf[i+1]);
        }
        for(int i=1;i<n-1;i++){
            ans=max(ans,(pre[i-1]-nums[i])*(long long)suf[i+1]);
        }
        return ans;
    }
};