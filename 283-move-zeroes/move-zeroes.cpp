class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return ;
        int start=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[start]);
                start++;
            }
        }


        // while(left<n){
        //     if(nums[left]==0){
        //         for(int i=left+1;i<n;i++){
        //             if(nums[i]!=0){
        //                 swap(nums[left],nums[i]);
        //                 break;
        //             }
        //         }
        //     }
        //     left++;
        // }
        // cout<<"[";
        //     for(int i=0;i<n-1;i++){
        //         cout<<nums[i]<<",";
        //     }
        //     cout<<nums[n-1]<<"]";
    }
};