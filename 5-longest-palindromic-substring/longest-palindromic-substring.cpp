class Solution {
public:
    string expansion(string s,int i){
        int n=s.size();
        int left=i-1;
        int right=i+1;
        while(right<n && s[right]==s[i]) right++;
        while(left>=0 && right<s.size() && s[left]==s[right]){
            left--;
            right++;
        }
        int len= right-left-1;
        return s.substr(left+1,len);
    }
    string longestPalindrome(string s) {
        if(s.empty()) return "";
        int n=s.size();
        string ans="";
        ans+=s[0];
        for(int i=0;i<n;i++){
            string temp=expansion(s,i);
            if(temp.size()>ans.size()){
                ans=temp;
            }
        }
        return ans;
    }
};