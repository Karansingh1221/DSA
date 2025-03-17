class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int n=candies.size();
        long long ans=0;
        long long left=1;
        long long right=*max_element(candies.begin(),candies.end());
        while(left<=right){
            long long mid=left+(right-left)/2;
            long long sum=0;
            for(long long i:candies){
                sum+=i/mid;
            }
            if(sum>=k){
                ans=max(ans,mid);
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return ans;

    }
};