class Solution {
public:
    void solve(string s,int& count,int index){
        int left=index-1;
        int right=index+1;
        while(right<s.size() && s[right]==s[index]){
            right++;
            count++;
        }
        while(left>=0 && right<=s.size() && s[left]==s[right]){
            count++;
            left--;
            right++;
        }
    }
    int countSubstrings(string s) {
        int n=s.size();
        int count=n;
        for(int i=0;i<n;i++){
            solve(s,count,i);
        }
        return count;
    }
};