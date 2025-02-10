class Solution {
public:
    string clearDigits(string s) {
        stack<char> st1;
        string ans = "";

        for (char ch : s) {
            if (isdigit(ch)) {
                // If there is a non-digit character in the stack, remove it
                if (!st1.empty()) st1.pop();
            } else {
                // Push non-digit characters onto the stack
                st1.push(ch);
            }
        }

        // Build the final string from the stack
        while (!st1.empty()) {
            ans = st1.top() + ans;
            st1.pop();
        }

        return ans;
    }
};
