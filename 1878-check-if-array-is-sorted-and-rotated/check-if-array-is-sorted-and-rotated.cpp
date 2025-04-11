class Solution {
public:
    bool check(vector<int>& nums) {
        int k=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                k++;
            }
        }
        if(nums[n-1]>nums[0]){
            k++;
        }
        if(k>1) return false;
        return true;
    }
};
// class Solution {
// public:
//     void reverse(vector<int> & nums,int start,int end){
//         while(start<end){
//             swap(nums[start++],nums[end--]);
//         }
//     }
//     void rotate(vector<int> &nums,int k){
//         reverse(nums,0,k-1);
//         reverse(nums,k,nums.size()-1);
//         reverse(nums,0,nums.size()-1);

//     }
//     bool check(vector<int>& nums) {
//         int k=0;
//         for(int i=1;i<nums.size();i++){
//             if(nums[i]<nums[i-1]){
//                 k=i;
//                 break;
//             }
//         }
//         rotate(nums,k);
//         for(int i=1;i<nums.size();i++){
//             if(nums[i]<nums[i-1]){
//                 return false;
//             }
//         }
//         return true;
//     }
// };