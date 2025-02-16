class Solution {
public:
    string largestOddNumber(string s) {
        string str="";
        for(int i=s.size()-1;i>=0;i--){
            int n=s[i]-'0';
            if(n&1){
                str=s.substr(0,i+1);
                break;
            }
        }        
        return str;
    }
};