class Solution {
public:
    bool solve(vector<int>& nums,int k,int mid){
        int count=1;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>mid){
                count++;
                sum=nums[i];
            }
            if(count>k) return false;
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int left=*max_element(nums.begin(),nums.end());
        int right=accumulate(nums.begin(),nums.end(),0);
        int ans=0;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(solve(nums,k,mid)){
                right=mid-1;
                ans=mid;
            }else{
                left=mid+1;
            }
        }
        // if(solve(nums,k,left)) return left;
        // else return right;
        return ans;
    }
};