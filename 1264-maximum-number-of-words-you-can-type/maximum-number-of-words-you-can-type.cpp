class Solution {
public:
    int canBeTypedWords(string text, string letters) {
        // int count=0;
        // vector<string> words;
        // string word="";
        // for(char c:text){
        //     if(c==' '){
        //         if(word!=" "){
        //             words.push_back(word);
        //         }
        //         word="";
        //         continue;
        //     }
        //     word+=c;
        // }
        // if(word!=" "){
        //     words.push_back(word);
        // }
        // for(auto w:words){
        //     for(char c:w){
        //         if(letters.find(c)!=string::npos){
        //             count++;
        //             break;
        //         }
        //     }
        // }
        // return words.size()-count;

        int count=0;
        istringstream iss(text);
        string word;
        while(iss >> word){
            bool valid=true;
            for(char c: word){
                if(letters.find(c)!=string::npos){
                    valid=false;
                    break;
                }
            }
            if(valid){
                count++;
            }
        }
        return count;
    }
};