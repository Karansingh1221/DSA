class Solution {
public:
    long long solve(vector<int>& piles,long long speed){
        long long hours=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            if(piles[i]<speed){
                hours++;
            }else{
                hours +=piles[i]/speed;
                if(piles[i]%speed!=0) hours++;
            }
        }
        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        long long left=1;
        long long right=*max_element(piles.begin(),piles.end());
        while(left<=right){
            long long mid=left+(right-left)/2;
            long long hours=solve(piles,mid);
            if(hours>h){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return left;
    }
};