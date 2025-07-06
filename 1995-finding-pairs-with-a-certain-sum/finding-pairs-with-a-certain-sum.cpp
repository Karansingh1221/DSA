class FindSumPairs {
public:
    vector<int> num1;
    vector<int> num2;
    unordered_map<int,int> freq;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        num1=nums1;
        num2=nums2;
        for(int n:num2){
            freq[n]++;
        }
    }
    
    void add(int index, int val) {
        freq[num2[index]]--;
        num2[index]+=val;
        freq[num2[index]]++;
    }
    
    int count(int tot) {
        int count=0;
        for(int i=0;i<num1.size();i++){
            int rem=tot-num1[i];
            if(freq.count(rem)) count+=freq[rem];
        }
        return count;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */