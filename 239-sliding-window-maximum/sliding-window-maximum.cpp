class Solution {
public:
    // int maximum(vector<int>& nums,int left,int right){
    //     int ans=nums[left];
    //     for(int i=left+1;i<=right;i++){
    //         ans=max(ans,nums[i]);
    //     }
    //     return ans;
    // }
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // int n=nums.size();
        // vector<int> v;
        // int left=0;
        // int right=k-1;
        // int maxi=maximum(nums,left,right);
        // bool flag=false;
        // while(right<n){
        //     if(flag){
        //         flag=false;
        //         maxi=maximum(nums,left,right);
        //     }
        //     if(nums[right]>=maxi){
        //         maxi=nums[right];
        //     }
        //     if(nums[left]==maxi){
        //         flag=true;
        //     }
        //     v.push_back(maxi);
        //     left++;
        //     right++;
        // }

        // return v;
        int n=nums.size();
        int left=0;
        int right=k-1;
        map<int,int> mp;
        vector<int> v;
        for(int i=0;i<k;i++){
            mp[nums[i]]++;
        }
        while(right<n-1){
            auto it=--mp.end();
            v.push_back(it->first);
            mp[nums[left]]--;
            if(mp[nums[left]]==0) mp.erase(nums[left]);
            left++;
            right++;
            mp[nums[right]]++;
        }
        auto it=--mp.end();
        v.push_back(it->first);
        return v;
    }
};