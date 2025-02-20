class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string ans="";
        int i=0;
        for(string c:nums){
            if(c[i]=='1'){
                ans=ans+"0";
            }else{
                ans=ans+"1";
            }
            i++;
        }
        return ans;
    }
};