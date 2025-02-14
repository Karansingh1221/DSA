class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int> mp;
        int start=0;int end=0;
        int count=0;
        int n=s.size();
        for(int i=0;i<s.size();i++){
            mp[s[end]]++;
            while(mp['a'] && mp['b'] && mp['c']){
                count+=n-end;
                mp[s[start]]--;
                start++;
            }
            end++;
        }        
        return count;
    }
};