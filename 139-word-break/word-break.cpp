class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.size();
        vector<bool> dp(n+1,false);
        unordered_set<string> st(wordDict.begin(),wordDict.end());
        dp[0]=true;
        for(int i=1;i<n+1;i++){
            for(int j=0;j<i;j++){
                string a=s.substr(j,i-j);
                if(dp[j] && st.find(a)!=st.end()){
                    dp[i]=true;
                }
            }
        }        
        return dp[n];
    }
};