class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int x=*max_element(nums.begin(),nums.end());
        long long count=0;
        long maxOccur=0;
        //Sliding window using map
        // unordered_map<int,int> mp;
        // int left=0;
        // for(int i=0;i<n;i++){
        //     mp[nums[i]]++;
        //     while(mp[x]>=k){
        //         count+=n-i;
        //         mp[nums[left]]--;
        //         if(mp[nums[left]]==0){
        //             mp.erase(mp[nums[left]]);
        //         }
        //         left++;
        //     }
        // }    
        //Sliding Window using two pointers
        int left=0;
        int right=0;
        for(int i=0;i<n;i++){
            if(nums[i]==x) maxOccur++;
            while(maxOccur>=k){
                count+=n-i;
                if(nums[left]==x){
                    maxOccur--;
                }
                left++;
            }
        }
        return count;
    }
};