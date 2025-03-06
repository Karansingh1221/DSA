class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int> mp;
        vector<int> res;
        int m=grid.size();
        int n=grid[0].size();
        int total=m*n;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mp[grid[i][j]]++;
            }
        }       
        int repeat, miss;
        for(int i=1;i<=total;i++){
            if(mp[i]==2){
                repeat=i;
            }else if(mp[i]==0){
                miss=i;
            }
        }
        res.push_back(repeat);
        res.push_back(miss);
        return res;
    }
};