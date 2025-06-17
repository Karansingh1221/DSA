class Solution {
public:
    long long score=0;

    //befaltu ki approaach
    // void solve(vector<int>& nums1, vector<int>& nums2, int k,int index,int count,long long sum,int mini){
    //     if(count==k){
    //         score=max(score,sum*mini);
    //         cout<<score<<" "<<sum<<" "<<mini<<endl;
    //         return;
    //     }
    //     if(index>=nums1.size()) return;
    //     int temp=mini;
    //     mini=min(mini,nums2[index]);
    //     sum+=nums1[index];
    //     solve(nums1,nums2,k,index+1,count+1,sum,mini);
    //     sum-=nums1[index];
    //     mini=temp;
    //     solve(nums1,nums2,k,index+1,count,sum,mini);
    // }
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        // solve(nums1,nums2,k,0,0,0,INT_MAX);
        // return score; 
        vector<pair<int,int>> v;
        int n=nums1.size();
        for(int i=0;i<n;i++){
            v.push_back({nums2[i],nums1[i]});
        }
        sort(v.rbegin(),v.rend());
        long long sum=0;
        priority_queue<int,vector<int>,greater<int>> mp;
        long long ans=0;
        for(int i=0;i<n;i++){
            int x=v[i].first;
            int y=v[i].second;
            mp.push(y);
            sum+=y;
            if(mp.size()>k){
                sum-=mp.top();
                mp.pop();
            }
            if(mp.size()==k){
                ans=max(ans,sum*1LL*x);
            }
        }    
        return ans;
    }
};