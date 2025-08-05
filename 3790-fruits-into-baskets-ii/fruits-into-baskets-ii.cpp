class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=fruits.size();
        int count=0;
        for(int i=0;i<n;i++){
            bool flag=false;
            for(int j=0;j<n;j++){
                if(baskets[j]>=fruits[i]) {
                    flag=true;
                    baskets[j]=0;
                    break;
                }
            }
            if(!flag) count++;
        }
        return count;
    }
};