class Solution {
public:
    void solve(vector<int>& nums,vector<vector<int>>& v,int ind,int sum,int target,vector<int> temp){
        if(sum==target){
            v.push_back(temp);
            return;
        }
        for(int i=ind;i<nums.size();i++){
            if(ind<i && nums[i]==nums[i-1]) continue;
            if(sum+nums[i]>target) break;
            sum+=nums[i];
            temp.push_back(nums[i]);
            solve(nums,v,i+1,sum,target,temp);
            temp.pop_back();
            sum-=nums[i];
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<vector<int>> v;
        vector<int> temp;
        sort(candidates.begin(),candidates.end());
        solve(candidates,v,0,0,target,temp);
        return v;

    }
};