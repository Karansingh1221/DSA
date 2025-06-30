class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num<=1) return true;
        int left=1;
        int right=num;
        while(left<=right){
            double mid=left+(right-left)/2;
            if(num/mid<mid){
                right=mid-1;
            }else if(num/mid>mid){
                left=mid+1;
            }else if(num/mid==mid){
                return true;
            }
        }
        return false;
    }
};