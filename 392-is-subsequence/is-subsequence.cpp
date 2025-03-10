class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m=s.size();
        int n=t.size();
        if(m>n) return false;
        int left=0;
        for(int i=0;i<n;i++){
            if(s[left]==t[i]){
                left++;
                if(left==m) break;
            }
        }
        if(left==m) return true;
        return false;
    }
};