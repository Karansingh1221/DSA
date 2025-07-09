class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int m=arr1.size();
        int n=arr2.size();
        sort(arr2.begin(),arr2.end());
        int res=0;
        for(int i=0;i<m;i++){
            bool flag=true;
            int left=0;
            int right=n-1;
            while(left<=right){
                int mid=left+(right-left)/2;
                if(abs(arr2[mid]-arr1[i])<=d){
                    flag=false;
                    break;
                }else if(arr1[i]>arr2[mid]){
                    left=mid+1;
                }else{
                    right=mid-1;
                }
            }
            if(flag) res++;
        }
        return res;
    }
};