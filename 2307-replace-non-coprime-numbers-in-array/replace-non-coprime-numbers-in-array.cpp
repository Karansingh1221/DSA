class Solution {
public:
    long long gcd(long a,long long b){
        if(b==0) return a;
        return gcd(b,a%b);
    }
    long long lcm(long long a,long long b){
        return (a*b)/gcd(a,b);
    }
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<long long> result;
        int n=nums.size();
        for(int i=0;i<n;i++){
            result.push_back(nums[i]);
            while(result.size()>=2){
                long long a=result[result.size()-2];
                long long b=result.back();
                if(gcd(a,b)!=1){
                    result.pop_back();
                    result.back()=lcm(a,b);
                }else{
                    break;
                }
            }
        }
        return vector<int>(result.begin(),result.end());
        
        
    }
};