class Solution {
public:
    bool solve(vector<int>& weights,int capacity,int days){
        int sum=0;
        int count=1;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
            if(sum>capacity){
                sum=weights[i];
                count++;
            }
        }
        return count<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int left=*max_element(weights.begin(),weights.end());
        int right=accumulate(weights.begin(),weights.end(),0);
        int ans=right;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(solve(weights,mid,days)){
                right=mid-1;
                ans=mid;
            }else{
                left=mid+1;
            }
        }
        return ans;
    }
};