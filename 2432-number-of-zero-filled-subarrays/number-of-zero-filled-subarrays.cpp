class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int n=nums.size();
        long long sum=0;
        for(int i=0;i<n;i++){
            long long count=0;
            if(nums[i]==0){
                while(i<n && nums[i]==0){
                    count++;
                    i++;
                }
                sum+=count*(count+1)/2;
            }
        }
        return sum;
    }
};