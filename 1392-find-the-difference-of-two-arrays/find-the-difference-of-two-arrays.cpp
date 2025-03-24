class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        for(int i:nums1){
            mp1[i]++;
        }
        for(int i:nums2){
            mp2[i]++;
        }
        vector<int> temp;
        for(auto pair:mp1){
            if(mp2.find(pair.first)==mp2.end()){
                temp.push_back(pair.first);
            }
        }
        ans.push_back(temp);
        vector<int> tem;
        for(auto pair:mp2){
            if(mp1.find(pair.first)==mp1.end()){
                tem.push_back(pair.first);
            }
        }
        ans.push_back(tem);
        return ans;
    }
};