class Solution {
public:
    string vow_rem(string word){
        string s=word;
        for(char& c:s){
            if(c=='a' || c=='i' || c=='o' || c=='e' || c=='u'){
                c='*';
            }
        }
        return s;
    }

    string sens(string word){
        string lower=word;
        transform(lower.begin(),lower.end(),lower.begin(),::tolower);
        return lower;
    }
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        set<string> s(wordlist.begin(),wordlist.end());
        unordered_map<string,string> lower_case;
        unordered_map<string,string> vowel;
        for(string word:wordlist){
            string lower=sens(word);
            string vow=vow_rem(lower);
            if(!lower_case.count(lower)){
                lower_case[lower]=word;
            }
            if(!vowel.count(vow)){
                vowel[vow]=word;
            }
        }
        vector<string> v;
        for(string q:queries){
            string low=sens(q);
            string vow=vow_rem(low);

            if(s.count(q)){
                v.push_back(q);
            }else if(lower_case.count(low)){
                v.push_back(lower_case[low]);
            }else if(vowel.count(vow)){
                v.push_back(vowel[vow]);
            }else{
                v.push_back("");
            }
        }
        return v;
    }
};