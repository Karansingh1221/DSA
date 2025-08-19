class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        if(n<3) return 0;
        int sum=0;
        int i=0;
        while(i<n-1){
            int diff=nums[i+1]-nums[i];
            int count=1;
            while(i<n-1 && diff==(nums[i+1]-nums[i])){
                count++;
                i++;
            }
            if(count>=3){
                sum+=(count * (count+1))/2 - 2*count +1;
            }
        }
        return sum;

    }
};