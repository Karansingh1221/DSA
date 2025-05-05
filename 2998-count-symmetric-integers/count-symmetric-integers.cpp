class Solution {
public:
    int add(int n,int start,int end){
        int sum=0;
        string s=to_string(n);
        while(start<end){
            sum+=s[start]-'0';
            start++;
        }
        return sum;
    }
    int len(int n){
        int count=0;
        while(n>0){
            count++;
            n/=10;
        }
        return count;
    }
    int countSymmetricIntegers(int low, int high) {
        int cnt=0;
        for(int i=low;i<=high;i++){
            int length=len(i);
            if(length%2!=0) continue;
            int last_half=add(i,0,length/2);
            int first_half=add(i,length/2,length);
            if(first_half==last_half){
                cnt++;
            }
        }
        return cnt;
    }
};