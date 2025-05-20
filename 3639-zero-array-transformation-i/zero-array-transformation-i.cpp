class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        int m=queries.size();
        vector<int> cmp(n+1,0);
        for(auto q:queries){
            cmp[q[0]]++;
            if(q[1]+1<n) cmp[q[1]+1]--;
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            cnt+=cmp[i];
            if(nums[i]>cnt) return false;
        }
        return true;

    }
};