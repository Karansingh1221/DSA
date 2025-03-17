class Solution {
public:
    bool check(vector<int>& nums,int mid,int k){
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=mid){
                count++;
                i++;
            }
        }
        return count>=k;
    }
    int minCapability(vector<int>& nums, int k) {
        int left=1;
        int right=*max_element(nums.begin(),nums.end());
        int ans=0;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(check(nums,mid,k)){
                ans=mid;
                right=mid-1;
            }else{
                left=mid+1;
            }
        }        
        return ans;
    }
};