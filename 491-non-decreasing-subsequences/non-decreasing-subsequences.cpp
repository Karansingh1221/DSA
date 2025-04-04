class Solution {
public:
    void solve(vector<int>& nums,set<vector<int>> &mp,vector<int>& temp,int i,int n){
        if(temp.size()>=2){
            mp.insert(temp);
        }
        if(i>=n){
            return;
        }
        if(temp.empty() || nums[i]>=temp.back()){
            temp.push_back(nums[i]);
            solve(nums,mp,temp,i+1,n);
            temp.pop_back();
        }
        solve(nums,mp,temp,i+1,n);        
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> res;
        set<vector<int>> mp;
        vector<int> temp;
        int n=nums.size();
        solve(nums,mp,temp,0,n);
        return vector<vector<int>>(mp.begin(),mp.end());

    }
};
// class Solution {
// public:
//     void rec(int i,int n,vector<int>&arr,vector<int>&a,set<vector<int>>&result){
//         if(a.size()>=2){
//             result.insert(a);
//         }
//         if(i>=n){
//             return;
//         }

//         if(a.empty() ||arr[i]>=a.back()){
//             a.push_back(arr[i]);
//             rec(i+1,n,arr,a,result);
//             a.pop_back();
//         }
//         rec(i+1,n,arr,a,result);
        
//     }
//     vector<vector<int>> findSubsequences(vector<int>& arr) {
//         set<vector<int>>result;
//         int n = arr.size();
//         vector<int>a;
//         rec(0,n,arr,a,result);
//         return vector<vector<int>>(result.begin(), result.end());
//     }
// };