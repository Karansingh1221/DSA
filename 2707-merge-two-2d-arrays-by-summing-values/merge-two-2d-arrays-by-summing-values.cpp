class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        // map<int,int> mp;
        // for(auto pair:nums2){
        //     mp[pair[0]]=pair[1];
        // }
        // for(auto pair:nums1){
        //     mp[pair[0]]+=pair[1];
        // }
        // vector<vector<int>> ans;
        // for(auto i: mp){
        //     vector<int> a={i.first,i.second};
        //     ans.push_back(a);
        //     a.pop_back();
        // }
        // return ans;
        int m=nums1.size();
        int n=nums2.size();
        int left=0;
        int right=0;
        vector<vector<int>> res;
        while(left<m && right<n){
            if(nums1[left][0]==nums2[right][0]){
                res.push_back({nums1[left][0],nums1[left][1]+nums2[right][1]});
                left++;
                right++;
            }else if(nums1[left][0]<nums2[right][0]){
                res.push_back({nums1[left][0],nums1[left][1]});
                left++;
            }else{
                res.push_back({nums2[right][0],nums2[right][1]});
                right++;
            }
        }
        while(left<m){
            res.push_back({nums1[left][0],nums1[left][1]});
            left++;
        }
        while(right<n){
            res.push_back({nums2[right][0],nums2[right][1]});
            right++;
        }
        return res;
        }
};