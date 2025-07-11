class Solution {
public:
    int getLucky(string s, int k) {
        string sum="";
        for(int i=0;i<s.size();i++){
            sum+=to_string(s[i]-'a'+1);
        }
        cout<<sum<<endl;
        int ans=0;
        for(int i=0;i<k;i++){
            int x=0;
            for(int j=0;j<sum.size();j++){
                x+=sum[j]-'0';
            }
            cout<<x<<endl;
            ans=x;
            sum=to_string(x);
            cout<<sum<<endl;
        }
        
        return ans;
    }
};