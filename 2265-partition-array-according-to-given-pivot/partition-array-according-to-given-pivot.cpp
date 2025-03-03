class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int> less;
        vector<int> great;
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                less.push_back(nums[i]);
            }else if(nums[i]>pivot){
                great.push_back(nums[i]);
            }else{
                count++;
            }
        }
        for(int i=0;i<less.size();i++){
            nums[i]=less[i];
        }
        for(int i=0;i<count;i++){
            nums[less.size()+i]=pivot;
        }
        for(int i=0;i<great.size();i++){
            nums[less.size()+count+i]=great[i];
        }
        return nums;
        
    }
};