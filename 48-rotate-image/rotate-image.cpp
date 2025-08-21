class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        // vector<vector<int>> mat(m,vector<int>(n,0));
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         mat[j][n-i-1]=matrix[i][j];
        //     }
        // }
        // matrix=mat;

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        int left=0;
        int right=n-1;
        for(int i=0;i<n/2;i++){
            for(int j=0;j<n;j++){
                swap(matrix[j][left],matrix[j][right]);
            }
            right--;
            left++;
        }
        
    }
};