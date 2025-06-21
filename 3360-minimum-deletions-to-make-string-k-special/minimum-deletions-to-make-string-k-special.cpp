class Solution {
public:
    int minimumDeletions(string word, int k) {
        // int count=0;
        unordered_map<char,int> mp;
        for(char c:word){
            mp[c]++;
        }
        int ans=INT_MAX;
        vector<int> v;
        for(auto pair:mp){
            v.push_back(pair.second);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            int range=v[i]+k;
            int total=v[i];
            for(int j=i+1;j<v.size();j++){
                if(v[j]>range) total+=range;
                else total+=v[j];
            }
            int remain=word.size()-total;
            ans=min(ans,remain);
        }
        return ans;
    }
};