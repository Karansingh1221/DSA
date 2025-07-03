class Solution {
public:
    vector<vector<int>> ans;
    void solve(int start,vector<int>& num){
        if(start==num.size()){
            ans.push_back(num);
            return;
        }
        for(int i=start;i<num.size();i++){
            swap(num[start],num[i]);
            solve(start+1,num);
            swap(num[start],num[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        solve(0,nums);
        return ans;
    }
};