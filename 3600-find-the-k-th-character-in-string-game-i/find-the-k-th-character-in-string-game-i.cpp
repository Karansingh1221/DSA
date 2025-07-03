class Solution {
public:
    char kthCharacter(int k) {
        string s="a";
        while(k>s.size()){
            string temp="";
            for(int i=0;i<s.size();i++){
                temp+=(s[i]+1);
            }
            cout<<temp<<endl;
            s.append(temp);
        }
        return s[k-1];
    }
};