class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int left=0;
        int right=n-1;
        while(left<m && right<n && left>=0 && right>=0){
            if(matrix[left][right]>target){
                right--;
            }else if(matrix[left][right]<target){
                left++;
            }else{
                return true;
            }
        }
        return false;
    }
};