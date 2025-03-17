class Solution {
public:
    
    double findMaxAverage(vector<int>& nums, int k){
        int n=nums.size();
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int ans=sum;
        for(int i=k;i<n;i++){
            sum+=nums[i]-nums[i-k];
            ans=max(ans,sum);
        }

        return (double)ans/k;
                
    }
};