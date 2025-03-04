class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int left=0,right=0;
        int m=word1.size();
        int n=word2.size();
        string res="";
        while(left<m && right<n){
            res+=word1[left];
            res+=word2[right];
            left++;
            right++;
        }
        while(left<m){
            res+=word1[left];
            left++;
        }
        while(right<n){
            res+=word2[right];
            right++;
        }
        return res;
    }
};