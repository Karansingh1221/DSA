class Solution {
public:
    void sortColors(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // cout<<"[";
        // for(int i=0;i<nums.size()-1;i++){
        //     cout<<nums[i]<<",";
        // }
        // cout<<nums[nums.size()-1]<<"]"<<endl;
        int left=0,mid=0;
        int n=nums.size();
        int right=n-1;
        while(mid<=right){
            if(nums[mid]==2){
                swap(nums[mid],nums[right]);
                // mid++;
                right--;
            }
            else if(nums[mid]==1){
                mid++;
            }else{
                swap(nums[mid],nums[left]);
                left++;
                mid++;
            }
        }

    }
};