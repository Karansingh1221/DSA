class Solution {
public:
    int countSubstrings(string s) {
        int res = 0;

        for (int i = 0; i < s.length(); i++) {
            res += count_palindrome(s, i, i);
            res += count_palindrome(s, i, i + 1);
        }

        return res;        
    }

private:
    int count_palindrome(string s, int left, int right) {
        int count = 0;
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            count++;
            left--;
            right++;
        }
        return count;
    }

};