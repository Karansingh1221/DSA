class Solution {
public:
    bool checkValidString(string s) {
        stack<char> br;
        stack<char> star;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                br.push(i);
            }else if(s[i]=='*'){
                star.push(i);
            }else{
                if(!br.empty()){
                    br.pop();
                }else{
                    if(!star.empty()){
                        star.pop();
                    }else{
                        return false;
                    }
                }
            }
        }
        while(!star.empty() && !br.empty()){
            if(star.top()>br.top()){
                star.pop();
                br.pop();
            }else{
                return false;
            }
        }
        if(br.empty()) return true;
        return false;
    }
};