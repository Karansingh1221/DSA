class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size();
        int count=0;
        map<vector<int>,int> mp;
        for(int i=0;i<n;i++){
            vector<int> temp(n);
            for(int j=0;j<n;j++){
                temp[j]=grid[i][j];
            }
            mp[temp]++;
        }
        for(int i=0;i<n;i++){
            vector<int> temp(n);
            for(int j=0;j<n;j++){
                temp[j]=grid[j][i];
            }
            count+=mp[temp];
        }       
        return count;
    }
};