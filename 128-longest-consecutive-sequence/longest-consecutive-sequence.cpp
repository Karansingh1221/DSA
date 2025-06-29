class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_set<int> s(nums.begin(),nums.end());
        int ans=0;
        for(int num:s){
            if(s.find(num-1)==s.end()){
                int length=1;
                while(s.find(num+length)!=s.end()){
                    length++;
                }
                ans=max(length,ans);
            }
        }
        return ans;

    }
};