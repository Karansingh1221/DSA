class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>> arr(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[j][n-1-i]=matrix[i][j];
            }
        }
        matrix=arr;
    }
};