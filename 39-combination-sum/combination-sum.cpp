class Solution {
public:
    void solve(vector<int>& nums,vector<vector<int>> & ans,int index,int sum,int target,vector<int> temp){
        int n=nums.size();
        if(index>=n){
            return;
        }
        if(sum==target){
            // cout<<sum<<endl;
            ans.push_back(temp);
            return;
        }
        // cout<<nums[index]<<endl;
        if(sum+nums[index]<=target){
            temp.push_back(nums[index]);
            sum+=nums[index];
            solve(nums,ans,index,sum,target,temp);
            sum-=nums[index];
            temp.pop_back();
        }
        solve(nums,ans,index+1,sum,target,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        
        solve(candidates,ans,0,0,target,temp);
        return ans;

    }
};