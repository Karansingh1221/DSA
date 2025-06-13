class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int low = 0, high = nums[n - 1] - nums[0], ans = high;

        auto isValid = [&](int maxDiff) {
            int count = 0;
            for (int i = 1; i < n;) {
                if (nums[i] - nums[i - 1] <= maxDiff) {
                    count++;
                    i += 2;
                } else {
                    i++;
                }
            }
            return count >= p;
        };

        while (low <= high) {
            int mid = (low + high) / 2;
            if (isValid(mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};
