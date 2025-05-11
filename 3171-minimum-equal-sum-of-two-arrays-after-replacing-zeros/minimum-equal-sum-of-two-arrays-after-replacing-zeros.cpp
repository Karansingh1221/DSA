class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        long long c1=count(nums1.begin(),nums1.end(),0),
                  c2=count(nums2.begin(),nums2.end(),0);
        long long s1=accumulate(nums1.begin(),nums1.end(),c1),
                  s2=accumulate(nums2.begin(),nums2.end(),c2);
        if((s1<s2 && !c1) || (s2<s1 && !c2)) return -1;
        return max(s1,s2);
    }
};