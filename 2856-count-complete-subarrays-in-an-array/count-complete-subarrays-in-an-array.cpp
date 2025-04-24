class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());     
        int count=0;  
        int dist=s.size();
        int n=nums.size();
        unordered_map<int,int> mp;
        int left=0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            while(mp.size()==dist){
                count+=n-i;
                mp[nums[left]]--;
                if(mp[nums[left]]==0){
                    mp.erase(nums[left]);
                }
                left++;
            }
        }
        return count;
    }
};
        // for(int i=0;i<n;i++){
        //     unordered_set<int> st;
        //     for(int j=i;j<n;j++){
        //         st.insert(nums[j]);
        //         if(st.size()==dist){
        //         count++;
        //     }
        //     }
            
        // }