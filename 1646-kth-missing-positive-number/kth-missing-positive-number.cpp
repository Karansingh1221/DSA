class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // int i=1;
        // int ind=0;
        // while(k>0 && ind<arr.size()){
        //     if(i==arr[ind]){
        //         ind++;
        //     }else{
        //         k--;
        //         if(k==0)return i;
        //     }
        //     i++;
        // }
        // return i+k-1;

        //Using Binary Search
        int left=0;
        int right=arr.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(arr[mid]-(mid+1)>=k){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return left+k;
    }
};