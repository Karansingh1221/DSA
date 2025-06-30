class Solution {
public:
    bool isvowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U') return true;
        return false;
    }
    string sortVowels(string s) {
        string vow="";
        int n=s.size();
        for(int i=0;i<n;i++){
            if(isvowel(s[i])){
                vow+=s[i];
            }
        }
        sort(vow.begin(),vow.end());
        int left=0;
        for(int i=0;i<n;i++){
            if(isvowel(s[i])){
                s[i]=vow[left];
                left++;
            }
        }
        return s;
    }
};