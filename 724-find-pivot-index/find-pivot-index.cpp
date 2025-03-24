class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> left(n);
        left[0]=nums[0];
        vector<int> right(n);
        right[n-1]=nums[n-1];
        int ind=n-1;
        for(int i=1;i<n;i++){
            left[i]=nums[i]+left[i-1];
            right[ind-i]=nums[ind-i]+right[ind+1-i];
        }
        for(int i=0;i<n;i++){
            if(left[i]==right[i]){
                return i;
            }
        }
        return -1;
        
    }
};