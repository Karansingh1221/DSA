class Solution {
public:
    long long mod=1000000007;
    int peopleAwareOfSecret(int n, int delay, int forget) {
        long long share=0;
        vector<long long> dp(n+1);
        dp[1]=1;
        for(int t=2;t<=n;t++){
            if(t-delay>0){
                share=(share+dp[t-delay]+mod)%mod;
            }
            if(t-forget>0){
                share=(share-dp[t-forget]+mod)%mod;
            }
            dp[t]=share;
        }
        long long know=0;
        for(int i=n-forget+1;i<=n;i++){
            know=(know+dp[i])%mod;
        }
        return (int) know;

    }
};