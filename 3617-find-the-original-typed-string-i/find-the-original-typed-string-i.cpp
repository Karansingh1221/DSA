class Solution {
public:
    int possibleStringCount(string word) {
        int count=1;
        int n=word.size();
        int left=0;
        while(left<n){
            int length=0;
            left++;
            while(left<n && word[left]==word[left-1]){
                left++;
                length++;
            }
            count+=length;
        }
        return count;
    }
};