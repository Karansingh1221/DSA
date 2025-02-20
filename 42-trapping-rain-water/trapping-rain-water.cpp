class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> left(n);
        vector<int> right(n);
        left[0]=height[0];
        right[n-1]=height[n-1];
        int j=n-1;
        int ans=0;
        for(int i=1;i<n;i++){
            left[i]=max(left[i-1],height[i]);
            right[j-i]=max(right[j-i+1],height[j-i]);
        }
        for(int i=0;i<n;i++){
            ans+=min(left[i],right[i])-height[i];
        }        
        return ans;






        // left[0]=height[0];
        // right[n-1]=height[n-1];
        // int j=n-1;
        // for(int i=1;i<n;i++){
        //     left[i]=max(left[i-1],height[i]);
        //     right[j-i]=max(right[j-i+1],height[j-i]);
        // }
        // int ans=0;
        // for(int i=0;i<n;i++){
        //     ans+=min(left[i],right[i])-height[i];
        // }
        // return ans;
    }
};