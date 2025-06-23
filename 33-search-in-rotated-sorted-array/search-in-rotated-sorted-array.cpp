class Solution {
public:
    int binary(vector<int>&nums,int left,int right,int target){
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]<target){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int index=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                index=i;
                break;
            }
        }
        if(index==0 && nums[index]<=nums[n-1]){
            return binary(nums,0,n-1,target);
        }
        if(target>=nums[0]){
             return binary(nums,0,index,target);
        }else{
            return binary(nums,index+1,n-1,target);
        }
        return -1;
    }
};