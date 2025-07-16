class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int sum=accumulate(arr.begin(),arr.end(),0);
        int i=3;
        while(i<=n){
            int temp=0;
            int index=0;
            while(index+i<=n){
                for(int j=index;j<index+i;j++){
                    temp+=arr[j];
                }
                index++;
            }
            i+=2;
            sum+=temp;
        }
        return sum;
    }
};