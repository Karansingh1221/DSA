class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;
        int n=asteroids.size();
        for(int i=0;i<n;i++){
            while(!st.empty() && asteroids[i]<0 && st.back()>0){
                int diff=asteroids[i]+st.back();
                if(diff>0){
                    asteroids[i]=0;
                }else if(diff<0){
                    st.pop_back();
                }else{
                    st.pop_back();
                    asteroids[i]=0;
                }
            }
            if(asteroids[i]!=0){
                st.push_back(asteroids[i]);
            }
        }
        return st;
        
    }
};




// int n=asteroids.size();
//         vector<int> st;
//         for(int& a : asteroids){
//             while(!st.empty() && a<0 && st.back()>0){
//                 int dif=a+st.back();
//                 if(dif>0){
//                     a=0;
//                 }else if(dif<0){
//                     st.pop_back();
//                 }else{
//                     st.pop_back();
//                     a=0;
//                 }
//             }
//             if(a!=0){
//                 st.push_back(a);
//             }
//         }      
//         return st;