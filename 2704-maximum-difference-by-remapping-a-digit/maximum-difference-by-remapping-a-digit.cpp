class Solution {
public:
    int minMaxDifference(int num) {
        string s=to_string(num);
        int n=s.size();
        string max=s;
        string min=s;
        char c;
        for(int i=0;i<n;i++){
            if(s[i]!='9'){
                c=s[i];
                break;
            }
        }
        char t;
        for(int i=0;i<n;i++){
            if(s[i]!='0'){
                t=s[i];
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(max[i]==c){
                max[i]='9';
            }
        }        
        for(int i=0;i<n;i++){
            if(min[i]==t){
                min[i]='0';
            }
        }
        int maxi=stoi(max);
        int mini=stoi(min);
        int diff=maxi-mini;
        return diff;
    }
};