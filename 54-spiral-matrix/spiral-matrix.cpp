class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int> ans;
        int top=0,left=0;
        int right=n-1,bottom=m-1;
        while(ans.size()<m*n){
            for(int i=left;i<=right && ans.size()<m*n;i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom && ans.size()<m*n;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            for(int i=right;i>=left && ans.size()<m*n;i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
            for(int i=bottom;i>=top && ans.size()<m*n;i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
        return ans;
    }
};