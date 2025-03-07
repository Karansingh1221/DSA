class Solution {
public:
    bool prime(int n){
        if(n==0 || n==1) return false;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return false;    
        }
        return true;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<bool> no(right-left+1,false);
        for(int i=0;i<=right-left;i++){
            no[i]=prime(left+i);
        }
        vector<int> primevec;
        for(int i=0;i<no.size();i++){
            if(no[i]==true){
                primevec.push_back(left+i);
            }
        }
        int l=0,r=1;
        if(primevec.size()<2) return {-1,-1};
        int start=-1,end=-1;
        int mind=INT_MAX;
        while(r<primevec.size()){
            int dif=primevec[r]-primevec[l];
            if(mind>dif){
                start=primevec[l];
                end=primevec[r];
                mind=dif;
            }
            l++;
            r++;
        }
        return {start,end};
    }
};