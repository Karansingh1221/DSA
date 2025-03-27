class RecentCounter {
public:
    vector<int> ans;
    int start=0;
    RecentCounter(){}
    
    int ping(int t) {
        ans.push_back(t);
        while(ans[start]<t-3000){
            start++;
        }
        return ans.size()-start;        
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */