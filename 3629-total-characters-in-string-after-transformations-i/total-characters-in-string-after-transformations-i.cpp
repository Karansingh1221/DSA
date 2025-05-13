class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        // for(int i=0;i<t%26;i++){
        //     string res="";
        //     for(char c:s){
        //         if(c!='z'){
        //             res+=c+1;
        //         }else{
        //             res+="ab";
        //         }
        //     }
        //     s=res;
        // }
        // cout<<s<<endl;        
        // return s.length();
        vector<int> freq(26,0);
        int mod=1e9+7;
        for(char c:s){
            freq[c-'a']++;
        }
        for(int i=0;i<t;i++){
            int z=freq[25];
            for(int j=25;j>0;j--){
                freq[j]=freq[j-1];
            }
            freq[0]=0;
            freq[0]=(z+freq[0])%mod;
            freq[1]=(z+freq[1])%mod;
        }
        int sum=0;
        for(int i=0;i<26;i++){
            sum=(sum+freq[i])%mod;
        }
        return sum;
        
    }
};