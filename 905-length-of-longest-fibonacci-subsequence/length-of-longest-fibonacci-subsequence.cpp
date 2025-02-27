class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int n=arr.size();
        vector<vector<int>> dp(n,vector<int>(n,0));
        int maxlen=0;
        for(int curr=2;curr<n;curr++){
            int start=0;
            int end=curr-1;
            while(start<end){
                int pairsum=arr[start]+arr[end];
                if(pairsum>arr[curr]){
                    end--;
                }else if(pairsum<arr[curr]){
                    start++;
                }else{
                    dp[end][curr]=dp[start][end]+1;
                    maxlen=max(dp[end][curr],maxlen);
                    end--;
                    start++;
                }
            }
        }
        return maxlen==0?0:maxlen+2;

    }
};