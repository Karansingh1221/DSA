class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i:arr){
            mp[i]++;
        }
        unordered_map<int,int> ans;
        for(auto pair:mp){
            ans[pair.second]++;
        }
        for(auto pair:ans){
            if(pair.second>1){
                return false;
            }
        }
        return true;
    }
};