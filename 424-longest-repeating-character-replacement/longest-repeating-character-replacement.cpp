class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans=0;
        int n=s.size();
        for(char c='A';c<='Z';c++){
            int l=0,r=0,replace=0;
            while(r<n){
                if(s[r]==c)r++;
                else if(replace<k) r++,replace++;
                else if(s[l]==c) l++;
                else l++,replace--;
                ans=max(ans,r-l);
            }
        }
        return ans;
        
    }
};