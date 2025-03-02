class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int,int> mp;
        for(auto pair:nums2){
            mp[pair[0]]=pair[1];
        }
        for(auto pair:nums1){
            mp[pair[0]]+=pair[1];
        }
        vector<vector<int>> ans;
        for(auto i: mp){
            vector<int> a={i.first,i.second};
            ans.push_back(a);
            a.pop_back();
        }
        return ans;

    }
};