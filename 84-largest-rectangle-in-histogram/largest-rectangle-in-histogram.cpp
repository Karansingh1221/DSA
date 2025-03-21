class Solution {
public:
    void leftMin(vector<int>&heights,vector<int> &left){
        stack<int> leftmin;
        for(int i=0;i<heights.size();i++){
            while(!leftmin.empty() && heights[leftmin.top()]>=heights[i]){
                leftmin.pop();
            }
            if(leftmin.empty()){
                left.push_back(-1);
                leftmin.push(i);
            }else{
                left.push_back(leftmin.top());
                leftmin.push(i);
            }
        }
    }
    void rightMin(vector<int>&heights,vector<int> &right){
        stack<int> rightmin;
        for(int i=heights.size()-1;i>=0;i--){
            while(!rightmin.empty() && heights[rightmin.top()]>=heights[i]){
                rightmin.pop();
            }
            if(rightmin.empty()){
                right[i]=heights.size();
                rightmin.push(i);
            }else{
                right[i]=rightmin.top();
                rightmin.push(i);
            }
        }        
    }

    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> left;
        vector<int> right(n);
        leftMin(heights,left);
        rightMin(heights,right);
        int lararea=0;
        for(int i=0;i<n;i++){
            int width=right[i]-left[i]-1;
            int length=heights[i];
            lararea=max(lararea,length*width);
        }
        return lararea;
        
    }
};