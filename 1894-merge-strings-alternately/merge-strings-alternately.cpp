class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int left=0,right=0;
        int m=word1.size();
        int n=word2.size();
        string res="";
        int turn=0;
        while(left<m && right<n){
            if(turn%2==0){
                res+=word1[left];
                left++;
                turn++;
            }else{
                res+=word2[right];
                right++;
                turn++;
            }
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