class Solution {
public:
    long long dfs(vector<vector<int>>& q,int i,vector<long long>& dp){
        if(i>=q.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        long long pt=q[i][0];
        int skip=q[i][1];
        dp[i]=max(pt+dfs(q,i+skip+1,dp),dfs(q,i+1,dp));
        return dp[i];
    } 
    long long mostPoints(vector<vector<int>>& questions) {
        int n=questions.size();
        vector<long long> dp(n,-1);
        return dfs(questions,0,dp); 

    }
};