class Solution {
public:
    bool isvowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'||c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int n=s.size();
        int left=0;int right=n-1;
        while(left<right){
            if(isvowel(s[left]) && isvowel(s[right])){
                swap(s[left],s[right]);
                left++;
                right--;
            }else if(isvowel(s[left]) && !isvowel(s[right])){
                right--;
            }else if(!isvowel(s[left]) && isvowel(s[right])){
                left++;
            }else{
                left++;
                right--;
            }
        }        
        return s;
    }
};