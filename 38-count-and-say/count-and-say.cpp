class Solution {
public:
    string countAndSay(int n) {
        string s="1";
        while(n>1){
            int count=1;
            string temp="";
            for(int i=1;i<s.size();i++){
                if(s[i]==s[i-1]){
                    count++;
                }else{
                    temp+=to_string(count);
                    temp+=s[i-1];
                    count=1;
                }
            }
            temp+=to_string(count);
            temp+=s[s.size()-1];
            s=temp;
            n--;
        }
        return s;
    }
};