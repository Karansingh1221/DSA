class Solution {
public:
    string reverseWords(string s) {
        int left=0;
        int right=s.size()-1;
        while(left<s.size() && s[left]==' '){
            left++;
        }            
        while(right>0 && s[right]==' '){
            right--;
        } 
        s=s.substr(left,right-left+1);
        stack<string> st;
        string ans="";
        for(char c:s){
            if(c!=' '){
                ans+=c;
            }else{
                if(!ans.empty()){
                    st.push(ans);
                }
                ans="";
            }
        }
        while(!st.empty()){
            ans=ans+" "+st.top();
            st.pop();
        }
        return ans;

    }
};