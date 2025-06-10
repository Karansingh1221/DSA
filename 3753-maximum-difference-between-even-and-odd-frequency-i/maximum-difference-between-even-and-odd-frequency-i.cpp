class Solution {
public:
    int maxDifference(string s) {
        map<char,int> mp;
        for(char i : s){
            mp[i]++;
        }
        int max_odd=-1;
        int max_even=INT_MAX;
        for(auto &pair : mp){
            if(pair.second%2==0 && pair.second<max_even){
                max_even=pair.second;
            }
            if(pair.second%2!=0 && pair.second>max_odd){
                max_odd=pair.second;
            }
            
        }
        if(max_odd==-1 || max_even==-1 ) return -1;

        return max_odd-max_even;
    }
};