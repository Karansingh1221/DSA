class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int count=0;
        int n=dominoes.size();
        map<vector<int>,int> mp;
        for(int i=0;i<n;i++){
            if(dominoes[i][0]>dominoes[i][1]) swap(dominoes[i][0],dominoes[i][1]);
            count+=mp[dominoes[i]]++;
        }
        // for(auto pair : mp){
        //     if(pair.second>=2){
        //         count+=(pair.second*(pair.second-1))/2;
        //     }
        // }
        return count;
    }
};