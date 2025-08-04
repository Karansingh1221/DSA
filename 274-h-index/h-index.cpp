class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int n=citations.size();
        int ans=0;
        int left=1, right=n;
        while(left<=right){
            int mid=left+(right-left)/2;
            int count=0;
            for(int i=n-1;i>=0;i--){
                if(citations[i]<mid) break;
                count++;
            }
            if(count>=mid){
                ans=mid;
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return ans;

    }
};