class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i=1;
        int ind=0;
        while(k>0 && ind<arr.size()){
            if(i==arr[ind]){
                ind++;
            }else{
                k--;
                if(k==0)return i;
            }
            i++;
        }
        return i+k-1;
    }
};