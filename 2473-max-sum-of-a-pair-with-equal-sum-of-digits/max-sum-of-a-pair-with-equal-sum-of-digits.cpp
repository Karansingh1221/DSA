class Solution {
public:
    int sumDigits(int num){
        int sum=0;
        while(num>0){
            int rem=num%10;
            sum=sum+rem;
            num=num/10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        int ans=-1;
        vector<int> mp(82,-1);
        for(int n:nums){
            int sum=sumDigits(n);
            if(mp[sum]!=-1){
                ans=max(ans,n+mp[sum]);
            }
            mp[sum]=max(n,mp[sum]);
        }
        return ans;

        
    }
};