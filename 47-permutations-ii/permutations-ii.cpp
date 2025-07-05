class Solution {
public:
    // map<vector<int>,int> mp;
    vector<vector<int>> v;
    void solve(vector<int>& nums,int start){
        if(start==nums.size()){
            // mp[nums]++;
            v.push_back(nums);
            return;
        }
        unordered_set<int> s;
        for(int j=start;j<nums.size();j++){
            if(s.count(nums[j])) continue;
            s.insert(nums[j]);
            swap(nums[j],nums[start]);
            solve(nums,start+1);
            swap(nums[j],nums[start]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        // vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        solve(nums,0);
        // for(auto pair:mp){
        //     v.push_back(pair.first);
        // }
        return v;
    }
};