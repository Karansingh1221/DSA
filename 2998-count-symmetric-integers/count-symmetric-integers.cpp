class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int cnt=0;
        for(int i=low;i<=high;i++){
            string s=to_string(i);
            int length=s.size();
            if(length%2!=0) continue;
            int first=0,last=0;
            for(int i=0;i<length/2;i++){
                first+=s[i]-'0';
            }
            for(int i=length/2;i<s.size();i++){
                last+=s[i]-'0';
            }
            if(first==last){
                cnt++;
            }
        }
        return cnt;
    }
};