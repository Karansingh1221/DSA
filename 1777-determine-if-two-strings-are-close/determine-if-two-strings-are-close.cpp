class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> v1(26);
        vector<int> v2(26);
        for(char c:word1){
            int i=c-'a';
            v1[i]++;
        }
        for(char c:word2){
            int i=c-'a';
            v2[i]++;
        }
        for(int i=0;i<26;i++){
            if(v1[i]==0 && v2[i]!=0){
                return false;
            }
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        if(v1==v2){
            return true;
        }
        return false;
    }
};