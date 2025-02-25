class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int odd_count = 0, even_count = 1; // even_count starts as 1 (for prefix sum = 0)
        int prefix_sum = 0, mod = 1e9 + 7;
        int count = 0;

        for (int num : arr) {
            prefix_sum += num;
            if (prefix_sum % 2 == 0) {
                count = (count + odd_count) % mod;
                even_count++;
            } else {
                count = (count + even_count) % mod;
                odd_count++;
            }
        }
        
        return count;
    }
};
