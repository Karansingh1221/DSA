class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> res;
        int x=1;
        for(int i=0;i<n/2;i++){
            res.push_back(x);
            res.push_back(-x);
            x++;
        }
        if(res.size()<n){
            res.push_back(0);
        }
        return res;
    }
};