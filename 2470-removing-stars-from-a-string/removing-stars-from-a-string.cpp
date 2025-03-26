class Solution {
public:
    string removeStars(string s) {
        int n=s.size();
        // stack<char> st;
        // for(int i=0;i<n;i++){
        //     if(s[i]=='*'){
        //         if(!st.empty()){
        //             st.pop();
        //         }
        //     }else{
        //         st.push(s[i]);
        //     }
        // }        
        // string ans="";
        // while(!st.empty()){
        //     ans=st.top()+ans;
        //     st.pop();
        // }
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]=='*'){
                if(!ans.empty()){
                    ans.pop_back();
                }
            }else{
                ans.push_back(s[i]);
            }
        } 
        return ans;
    }
};