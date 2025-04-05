class Solution {
public:
    void solve(vector<int>&nums,int i,int n,vector<vector<int>>& subset,vector<int>& temp){
        if(i>=n){
            subset.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        solve(nums,i+1,n,subset,temp);
        temp.pop_back();
        solve(nums,i+1,n,subset,temp);      

    }
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> subset;
        vector<int> temp;
        solve(nums,0,n,subset,temp);
        int total=0;
        for(auto set:subset){
            int x=0;
            for(int i:set){
                x^=i;
            }
            total+=x;
        }
        return total;
    }
};