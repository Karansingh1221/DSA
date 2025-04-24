class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }      
        int count=0;  
        int dist=mp.size();
        int n=nums.size();
        for(int i=0;i<n;i++){
            unordered_set<int> st;
            for(int j=i;j<n;j++){
                st.insert(nums[j]);
                if(st.size()==dist){
                count++;
            }
            }
            
        }
        return count;
    }
};