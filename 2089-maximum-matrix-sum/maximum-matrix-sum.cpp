class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum=0;
        int mini=INT_MAX;
        int negcount=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){

                if(matrix[i][j]<0){
                    negcount++;
                }
                int val=abs(matrix[i][j]);
                mini=min(val,mini);
                sum+=val;
            }
        }        
        if(negcount%2==0){
            return sum;
        }
        return sum-2*mini;
    }
};