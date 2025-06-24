class Solution {
public:
    bool solve(vector<int>& piles,int speed,int h){
        int hours=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            if(piles[i]<speed){
                hours++;
            }else{
                hours +=piles[i]/speed;
                if(piles[i]%speed!=0) hours++;
            }
        }
        if(hours<=h) return true;
        else return false;
        // return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int left=1;
        int right=*max_element(piles.begin(),piles.end());
        while(right-left>1){
            int mid=left+(right-left)/2;
            // int hours=solve(piles,mid);
            if(solve(piles,mid,h)){
                right=mid;
            }else{
                left=mid+1;
            }
        }
        if(solve(piles,left,h)) return left;
        else return right;
    }
};