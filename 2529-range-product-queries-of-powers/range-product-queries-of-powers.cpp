class Solution {
public:
    long long mod=1e9+7;
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<long long> power;
        long long r=1;
        while(n){
            if(n%2==1){
                power.push_back(r);
            }
            n/=2;
            r*=2;
        }
        vector<int> ans;
        for(int i=0;i<queries.size();i++){
            int pro=1;
            for(int j=queries[i][0];j<=queries[i][1];j++){
                pro=pro*power[j]%mod;
            }
            ans.push_back(pro);
        }
        return ans;
    }
};