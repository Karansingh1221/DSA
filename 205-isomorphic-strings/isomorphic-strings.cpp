class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        map<char,char> mp;
        unordered_set<char> used;
        for(int i=0;i<s.size();i++){
            char c1=s[i],c2=t[i];
            if(mp.count(c1)){
                if(mp[c1]!=c2) return false;
            }
            else{
                if(used.count(c2)) return false;
                mp[c1]=c2;
                used.insert(c2);
            }
        }        
        return true;
    }
};