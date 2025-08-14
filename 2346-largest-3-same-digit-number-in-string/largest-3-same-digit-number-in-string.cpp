class Solution {
public:
    string largestGoodInteger(string num) {
        int n=num.size();
        int one=0;
        int two=1;
        int three=2;
        int ans=-1;
        int ind=-1;
        while(three<n){
            if(num[one]==num[two] && num[two]==num[three]){
                if(ans<(num[one]-'0')){
                    ans=num[one]-'0';
                    ind=one;
                }
            }
            one++;
            two++;
            three++;
        }
        return ans==-1? "":string(3,num[ind]);
    }
};