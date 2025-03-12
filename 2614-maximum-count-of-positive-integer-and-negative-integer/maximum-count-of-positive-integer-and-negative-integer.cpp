class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<0){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        int negCount=low;
        low=0,high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<=0){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        int posCount=n-low;
        return max(negCount,posCount);
    }
};