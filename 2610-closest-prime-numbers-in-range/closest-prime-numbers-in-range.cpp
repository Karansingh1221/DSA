class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<bool> sieve(right+1,true);
        sieve[0]=sieve[1]=false;
        for(int i=2;i*i<right+1;i++){
            if(sieve[i]){
                for(int p=i*i;p<right+1;p+=i){
                    sieve[p]=false;
                }
            }
        }
        vector<int> primes;
        for(int i=left;i<=right;i++){
            if(sieve[i]){
                primes.push_back(i);
            }
        }
        if(primes.size()<2) return {-1,-1};
        int start=-1,end=-1;;
        int l=0,r=1;
        int mindif=INT_MAX;
        while(r<primes.size()){
            int dif=primes[r]-primes[l];
            if(mindif>dif){
                start=primes[l];
                end=primes[r];
                mindif=dif;
            }
            l++;
            r++;
        }
        return {start,end};
    }
};
// vector<bool> no(right-left+1,false);
//         for(int i=0;i<=right-left;i++){
//             no[i]=prime(left+i);
//         }
//         vector<int> primevec;
//         for(int i=0;i<no.size();i++){
//             if(no[i]==true){
//                 primevec.push_back(left+i);
//             }
//         }
//         int l=0,r=1;
//         if(primevec.size()<2) return {-1,-1};
//         int start=-1,end=-1;
//         int mind=INT_MAX;
//         while(r<primevec.size()){
//             int dif=primevec[r]-primevec[l];
//             if(mind>dif){
//                 start=primevec[l];
//                 end=primevec[r];
//                 mind=dif;
//             }
//             l++;
//             r++;
//         }
//         return {start,end};