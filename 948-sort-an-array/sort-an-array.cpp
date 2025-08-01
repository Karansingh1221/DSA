class Solution {
public:
    void merge(vector<int>& nums,int low,int mid,int high){
        int i=low;
        int j=mid+1;
        vector<int>v;
        while(i<=mid && j<=high){
            if(nums[i]<=nums[j]){
                v.push_back(nums[i]);
                i++;
            }else{
                v.push_back(nums[j]);
                j++;
            }
        }
        while(i<=mid){
            v.push_back(nums[i]);
            i++;
        }
        while(j<=high){
            v.push_back(nums[j]);
            j++;
        }
        for(int k=0;k<v.size();k++){
            nums[low+k]=v[k];
        }
    }
    void mergeSort(vector<int>& nums,int low,int high){
        if(low>=high) return;
        int mid=low+(high-low)/2;
        mergeSort(nums,low,mid);
        mergeSort(nums,mid+1,high);
        merge(nums,low,mid,high);
    }
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        mergeSort(nums,0,n-1);
        return nums;
    }
};