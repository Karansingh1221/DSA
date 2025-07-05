class Solution {
public:
    map<vector<int>,int> mp;
    void solve(vector<int>& nums,int start){
        if(start==nums.size()){
            mp[nums]++;
            return;
        }
        for(int j=start;j<nums.size();j++){
            swap(nums[j],nums[start]);
            solve(nums,start+1);
            swap(nums[j],nums[start]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> v;
        solve(nums,0);
        for(auto pair:mp){
            v.push_back(pair.first);
        }
        return v;
    }
};