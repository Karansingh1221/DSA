class Solution {
public:
    bool isvowel(char c){
        if(c=='a' || c=='i' || c=='e' || c=='o' || c=='u'){
            return true;
        }
        return false;
    }
    long long atleast(string word, int k){
        unordered_map<char,int> mp;
        long long count=0,left=0,right=0;
        int n=word.size();
        int cons=0;
        for(int right=0;right<n;right++){
            if(isvowel(word[right])){
                mp[word[right]]++;
            }else{
                cons++;
            }
            while(mp.size()==5 && cons>=k){
                count+=n-right;
                if(isvowel(word[left])){
                    mp[word[left]]--;
                    if(mp[word[left]]==0){
                        mp.erase(word[left]);
                    }
                }else{
                    cons--;
                }
                left++;
            }
        }   
        return count; 
    }
    long long countOfSubstrings(string word, int k) {
         return atleast(word,k)-atleast(word,k+1);
    }
};