class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int n=words.size();
        vector<string> result;
        result.push_back(words[0]);
        for(int i=1;i<n;i++){
            string l=words[i];
            string r=result.back();
            sort(l.begin(),l.end());
            sort(r.begin(),r.end());
            if(l==r){
                continue;
            }else{
                result.push_back(words[i]);
            }
        }
        return result;
    }
};