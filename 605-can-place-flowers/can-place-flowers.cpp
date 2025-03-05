class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0) return true;
        int m=flowerbed.size();
        for(int i=0;i<m;i++){
            if(flowerbed[i]==0 && (i==0 || flowerbed[i-1]==0) && (i==m-1 || flowerbed[i+1]==0)){
                flowerbed[i]=1;
                n--;
                if(n==0) return true;
            }
        }
        return false;
    }
};

        // int m=flowerbed.size();
        // if(flowerbed.size()==1 && n==0){
        //     return true;
        // }
        // if(flowerbed.size()==1 && flowerbed[0]==0 && (n==1 || n==0)){
        //     return true;
        // }
        // if(flowerbed.size()==1 && flowerbed[0]==1 && n<=1){
        //     return false;
        // }
        // if(flowerbed[0]==0 && flowerbed[1]==0){
        //     n--;
        //     flowerbed[0]=1;
        // }
        // for(int i=1;i<flowerbed.size()-1;i++){
        //     if(flowerbed[i]!=1 && flowerbed[i+1]==0 && flowerbed[i-1]==0){
        //         n--;
        //         flowerbed[i]=1;
        //     }
        // }    
        // if(flowerbed[m-1]==0 && flowerbed[m-2]==0){
        //     n--;
        // }    
        // if(n<=0) return true;
        // return false;