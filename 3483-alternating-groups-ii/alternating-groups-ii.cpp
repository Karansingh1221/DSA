class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        // int n=colors.size();
        // int count=0;
        // if(n<k) return 0;
        // for(int i=0;i<n;i++){
        //     bool ans=true;
        //     for(int j=0;j<k-1;j++){
        //         int left=(i+j)%n;
        //         int right=(i+j+1)%n;
        //         if(colors[left]==colors[right]){
        //             ans=false;
        //             break;
        //         }
        //     }
        //     if(ans) count++;
        // }
        // return count;


        int n=colors.size();
        int sz=n+k-1,ans=0;
        int alt=1;
        int prev=colors[0];
        for(int i=1;i<sz;i++){
            alt=(prev==colors[i%n])?1:alt+1;
            ans+=(alt>=k);
            prev=colors[i%n];
        }
        return ans;
        
    }
};