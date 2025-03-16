class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool> res(256,false);
        int left=0,right=0;
        int n=s.size();
        if(n==0 || n==1) return n;
        int len=INT_MIN;
        while(right<n){
            if(res[s[right]]){
                while(res[s[right]]){
                    res[s[left]]=false;
                    left++;
                }
            }
            res[s[right]]=true;
            len=max(len,right-left+1);
            right++;
        }
        return len;
    }
};