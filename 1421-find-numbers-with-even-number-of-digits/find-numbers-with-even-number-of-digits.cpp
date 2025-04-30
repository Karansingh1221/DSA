class Solution {
public:
    int countdigit(int n){
        int count=0;
        while(n>0){
            count++;
            n=n/10;
        }
        return count;
    }
    int findNumbers(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(countdigit(nums[i])%2==0){
                ans++;
            }
        }
        return ans;
    }
};