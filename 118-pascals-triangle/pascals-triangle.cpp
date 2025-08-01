class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> dp;
        dp.push_back({1});
        for(int i=1;i<numRows;i++){
            vector<int> temp;
            for(int j=0;j<i;j++){
                if(j==0){
                    temp.push_back(1);
                }else{
                    int n=dp[i-1][j-1]+dp[i-1][j];
                    temp.push_back(n);
                }
            }
            temp.push_back(1);
            dp.push_back(temp);
        }
        return dp;
    }
};