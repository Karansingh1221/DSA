class Solution {
public:
    long long binary(vector<int>& nums,int low,int high,int ele){
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>=ele){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        long long count=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            long long low=binary(nums,i+1,n-1,lower-nums[i]);
            long long high=binary(nums,i+1,n-1,upper-nums[i]+1);
            count+=(long long)high-low;
        }    
        return count;            
    }
};