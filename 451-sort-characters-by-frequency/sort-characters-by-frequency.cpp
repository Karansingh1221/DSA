class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mp;
        string ans="";
        int hf=INT_MIN;
        for(char c:s){
            mp[c]++;
            hf=max(hf,mp[c]);
        }
        
        while(hf>0){
            for(auto pair:mp){
                if(pair.second==hf){
                    ans=ans+string(hf,pair.first);
                }
            }
            hf--;
        }
        return ans;

    }
};