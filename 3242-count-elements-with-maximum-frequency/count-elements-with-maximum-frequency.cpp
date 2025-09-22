class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxi=0;
        map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }
        for(auto pair:mp){
            maxi=max(maxi,pair.second);
        }
        int sum=0;
        for(auto pair:mp){
            if(pair.second==maxi) sum+=maxi;
        }
        return sum;
    }
};