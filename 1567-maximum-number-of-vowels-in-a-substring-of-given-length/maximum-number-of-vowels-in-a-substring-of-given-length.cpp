class Solution {
public:
    bool isvowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int n=s.size();
        int len=0;
        int left=0;
        int right=k-1;
        int count=0;
        for(int i=left;i<=right;i++){
            if(isvowel(s[i])) count++;
        }
        len=max(count,len);
        for(int i=k;i<n;i++){
            if(isvowel(s[i])) count++;
            if(isvowel(s[i-k])) count--;
            len=max(count,len);
        }
        return len;
    }
};