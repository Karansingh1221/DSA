class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> s;
        int left=0;
        int right=0;
        int n=fruits.size();
        int ans=0;
        int sum=0;
        while(right<n){
            sum++;
            s[fruits[right]]++;
            while(s.size()>2){
                sum--;
                s[fruits[left]]--;
                if(s[fruits[left]]==0) s.erase(fruits[left]);
                left++;
            }
            right++;
            ans=max(sum,ans);
        }
        return ans;
    }
};