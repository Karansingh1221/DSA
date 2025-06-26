class Solution {
public:
    void solve(int i,vector<vector<int>>&res,int k,int n,int sum,vector<int> temp){
        if(sum==n && temp.size()==k){
            res.push_back(temp);
            return;
        }
        if(i>9 || temp.size()>k) return;
        sum+=i;
        temp.push_back(i);
        solve(i+1,res,k,n,sum,temp);
        sum-=i;
        temp.pop_back();
        solve(i+1,res,k,n,sum,temp);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> temp;
        solve(1,res,k,n,0,temp);
        return res;
    }
};