class Solution {
public:
    bool isvowel(char c){
        c=tolower(c);
        if(c=='a' ||c=='e' ||c=='i' ||c=='o' ||c=='u') return true;
        return false;
    }
    bool isValid(string word) {
        if(word.size()<3) return false;
        bool v=false;
        bool c=false;
        bool d=false;
        for(int i=0;i<word.size();i++){
            if(isvowel(word[i])){
                v=true;
            }else if(word[i]>='0' && word[i]<='9'){
                d=true;
            } else if(!isalnum(word[i])){
                return false;
            }else{
                c=true;
            }
        }
        if(c  && v) return true;
        return false;
    }
};