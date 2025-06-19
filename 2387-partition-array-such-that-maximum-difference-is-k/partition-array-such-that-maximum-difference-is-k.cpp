class Solution {
public:
    // vector<int> solve(vector<int>&n,int k){
    //     vector<int> temp;
    //     while(abs(n.back()-n[0])>k){
    //         temp.push_back(n.back());
    //         n.pop_back();
    //     }
    //     return temp;
    // }
    int partitionArray(vector<int>& nums, int k) {
        // sort(nums.begin(),nums.end());
        // int count=0;
        // vector<int> temp=nums;
        // while(!temp.empty()){
        //     temp=solve(temp,k);
        //     count++;
        // } 



        // int left=0;
        // int right=nums.size()-1;
        // while(left<nums.size()){
        //     if((nums[right]-nums[left])>k){
        //         right--;
        //     }else{
        //         left=right+1;
        //         count++;
        //         right=nums.size()-1;
        //     }
        // }
        // return count;  

        sort(nums.begin(), nums.end());
    int count = 0;
    int i = 0, n = nums.size();

    while (i < n) {
        int groupStart = nums[i];  // minimum in the group
        count++;                   // one new group formed
        i++;                       // at least one element in group

        // Extend group while condition holds
        while (i < n && nums[i] - groupStart <= k) {
            i++;
        }
    }

    return count;
    }
};