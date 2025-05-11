class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long c1=count(nums1.begin(),nums1.end(),0);
        long long c2=count(nums2.begin(),nums2.end(),0);
        long long s1=accumulate(nums1.begin(),nums1.end(),c1);
        long long s2=accumulate(nums2.begin(),nums2.end(),c2);
        if((s1<s2 && c1==0) || (s2<s1 && c2==0)) return -1;
        return max(s1,s2);
    }
};