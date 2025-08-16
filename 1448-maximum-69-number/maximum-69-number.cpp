class Solution {
public:
    int maximum69Number (int num) {
        string ans=to_string(num);
        for(int i=0;i<ans.size();i++){
            string temp=to_string(num);
            temp[i]=temp[i]=='6' ? '9':'6';
            if(stoi(temp)>stoi(ans)){
                ans=temp;
            }
        }
        return stoi(ans);
    }
};