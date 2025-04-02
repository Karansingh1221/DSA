class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s){
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int ans=0;
        if(s.size()==0) return 0;
        int j=s.size()-1,i=g.size()-1;
        while(i>=0 && j>=0){
            if(g[i]<=s[j]){
                ans++;
                i--;
                j--;
            }else if(g[i]>s[j]){
                i--;
            }
        }
        return ans;
    }
};