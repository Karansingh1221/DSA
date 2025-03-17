class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        // int n=nums.size();
        // unordered_map<int,int> mp;
        // int count=0;
        // for(int i=0;i<n;i++){
        //     int diff=k-nums[i];
        //     if(mp.find(diff)!=mp.end()){
        //         count++;
        //         mp[diff]--;
        //         if(mp[diff]==0) mp.erase(diff);
        //     }else{
        //         mp[nums[i]]++;
        //     }
        // }
        // return count;


        sort(nums.begin(),nums.end());
        int n=nums.size();
        int left=0;
        int right=n-1,count=0;
        while(left<right){
            if((nums[left]+nums[right])==k){
                count++;
                left++;
                right--;
            }else if((nums[left]+nums[right])>k){
                right--;
            }else{
                left++;
            }
        }
        return count;

    }
};

