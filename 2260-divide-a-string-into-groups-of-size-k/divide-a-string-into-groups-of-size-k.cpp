class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n=s.size();
        vector<string> v;
        for(int i=0;i<n;i+=k){
            string temp=s.substr(i,k);
            if(temp.size()<k){
                temp.append(k-temp.size(),fill);
            }
            v.push_back(temp);
        }
        return v;
    }
};