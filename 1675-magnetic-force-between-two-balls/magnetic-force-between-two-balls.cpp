class Solution {
public:
    bool solve(vector<int>& position,int m,int dist){
        int count=1;
        int lastpos=position[0];
        for(int i=1;i<position.size();i++){
            if(position[i]-lastpos>=dist){
                count++;
                lastpos=position[i];
            }
            if(count>=m) return true;
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        int n=position.size();
        sort(position.begin(),position.end());
        int left=1;
        int right=position[n-1]-position[0];
        int result=0;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(solve(position,m,mid)){
                result=mid;
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return result;
    }
};