class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int left=0;
        int right=n-k-1;
        int windsum=0;
        for(int i=0;i<=right;i++){
            windsum+=nums[i];
        }
        int maxsum=sum-windsum;
        while(right<n-1){
            windsum-=nums[left];
            left++;
            right++;
            windsum+=nums[right];
            maxsum=max(sum-windsum,maxsum);
        }
        return maxsum;

    }
};