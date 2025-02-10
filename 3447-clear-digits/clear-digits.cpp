class Solution {
public:
    string clearDigits(string s) {
        stack<char> st1;
        string ans="";
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                if(!st1.empty()) st1.pop();
            }else{
                st1.push(s[i]);
            }
        }
        while(!st1.empty()){
            ans=st1.top()+ans;
            st1.pop();
        }
        return ans;
    }
};