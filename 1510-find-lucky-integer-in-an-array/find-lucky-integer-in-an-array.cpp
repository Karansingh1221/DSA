class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> mp;
        for(int num:arr){
            mp[num]++;
        }
        int ans=-1;
        for(auto pair:mp){
            if(pair.first==pair.second) ans=max(ans,pair.first);
        }
        return ans;
    }
};