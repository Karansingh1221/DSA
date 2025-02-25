class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        // int odd_count = 0, even_count = 1; 
        // int prefix_sum = 0, mod = 1e9 + 7;
        // int count = 0;

        // for (int num : arr) {
        //     prefix_sum += num;
        //     if (prefix_sum % 2 == 0) {
        //         count = (count + odd_count) % mod;
        //         even_count++;
        //     } else {
        //         count = (count + even_count) % mod;
        //         odd_count++;
        //     }
        // }
        int odd_count=0,even_count=1;
        int prefix_sum=0,count=0;
        int mod=1e9+7;
        for(int num:arr){
            prefix_sum+=num;
            if(prefix_sum%2==0){
                count=(count+odd_count)%mod;
                even_count++;
            }else{
                count=(count+even_count)%mod;
                odd_count++;
            }
        }
        
        return count;
    }
};
