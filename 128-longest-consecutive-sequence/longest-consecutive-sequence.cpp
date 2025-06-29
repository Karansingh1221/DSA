class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_set<int> s(nums.begin(),nums.end());
        int ans=0;
        for(int num:s){
            if(s.find(num-1)==s.end()){
                int length=1;
                while(s.find(num+length)!=s.end()){
                    length++;
                }
                ans=max(length,ans);
            }
        }
        return ans;



        // for(int num:nums){
        //     mp[num]++;
        // }
        // int count=1;
        // vector<int> v;
        // for(auto pair:mp){
        //     v.push_back(pair.first);
        // }
        // int ans=1;
        // for(int i=1;i<v.size();i++){
        //     if((v[i]-v[i-1])==1){
        //         count++;
        //     }else{
        //         count=1;
        //     }
        //     ans=max(ans,count);
        // }
        // return ans;
    }
};