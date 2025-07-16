class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        int n=nums.size();
        // if(n==0) return 
        for(int num:nums){
            s.insert(num);
        }
        int count=0;
        int temp=1;
        int prev=INT_MAX;
        for(auto p:s){
            if(p-1==prev){
                temp++;
            }else{
                temp=1;
            }
            prev=p;
            count=max(count,temp);
        }
        return count;
    }
};