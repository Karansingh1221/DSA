class Solution {
public:
    bool isvowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') return true;
        return false;
    }
    int maxFreqSum(string s) {
        unordered_map<char,int> vow;
        unordered_map<char,int> cons;  
        for(char c: s){
            if(isvowel(c)){
                vow[c]++;
            }else{
                cons[c]++;
            }
        }      
        int vowf=0;
        int conf=0;
        for(auto pair : vow){
            vowf=max(vowf,pair.second);
        }
        for(auto pair : cons){
            conf=max(conf,pair.second);
        }
        return vowf+conf;
    }
};