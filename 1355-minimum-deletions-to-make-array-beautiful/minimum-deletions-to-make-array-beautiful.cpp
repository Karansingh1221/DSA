class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int index=0;
        if(n==1) return 1;
        for(int i=0;i<n-1;i++){
            if((index%2==0) && (nums[i]==nums[i+1])){
                count++;
            }else{
                index++;
            }
        } 
        if((nums.size()-count)%2!=0){
            count++;
        }      
        return count;
    }
};