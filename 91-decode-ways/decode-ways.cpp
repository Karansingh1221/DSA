class Solution {
public:
    int numDecodings(string s) {
        int n=s.size();
        vector<int> dp(n);
        if(s[0]=='0') return 0;
        if(n==1) return 1;
        dp[0]=1;
        int sec=stoi(s.substr(0,2));
        if(s[1]!='0') dp[1]+=1;
        if(sec>=10 && sec<=26){
            dp[1]+=1;
        }
        for(int i=2;i<s.size();i++){
            if(s[i]!='0') dp[i]+=dp[i-1];
            int num=stoi(s.substr(i-1,2));
            if(num>=10 && num<=26){
                dp[i]+=dp[i-2];
            }
            
        }    
        return dp[n-1];    
    }
};