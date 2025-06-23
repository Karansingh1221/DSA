class Solution {
public:
    int expansion(string s,int left,int right){
        int n=s.size();
        while(left>=0 && right<s.size() && s[left]==s[right]){
            left--;
            right++;
        }
        return right-left-1;
    }
    string longestPalindrome(string s) {
        if(s.empty()) return "";
        int n=s.size();
        int start=0,end=0;
        for(int i=0;i<n;i++){
            int odd=expansion(s,i,i);
            int even=expansion(s,i,i+1);
            int maxlen=max(odd,even);
            if(maxlen>end-start){
                start=i-(maxlen-1)/2;
                end=i+maxlen/2;
            }

        }
        return s.substr(start,end-start+1);
    }
};