class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        sort(hand.begin(),hand.end()); 
        unordered_map<int,int> mp;
        for(int i:hand){
            mp[i]++;
        }      
        for(int i:hand){
            if(mp.count(i)){
            for(int j=i;j<i+groupSize;j++){
                if(!mp.count(j)){
                    return false;
                }else{
                    mp[j]--;
                    if(mp[j]==0){
                        mp.erase(j);
                    }
                }
            }
            }
        }  
        return true;

    }
};