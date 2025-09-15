class Solution {
public:
    int canBeTypedWords(string text, string letters) {
        int count=0;
        vector<string> words;
        string word="";
        for(char c:text){
            if(c==' '){
                if(word!=" "){
                    words.push_back(word);
                }
                word="";
                continue;
            }
            word+=c;
        }
        if(word!=" "){
            words.push_back(word);
        }
        for(auto w:words){
            for(char c:w){
                if(letters.find(c)!=string::npos){
                    count++;
                    break;
                }
            }
        }
        return words.size()-count;
    }
};