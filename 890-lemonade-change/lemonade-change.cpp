class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int cash=0;
        int five=0,ten=0,twen=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5) five++;
            else if(bills[i]==10) ten++;
            else twen++;
            cash=(5*five)+(10*ten)+(20*twen);
            int remain=bills[i]-5;
            if(remain>=10){
                while(ten>0 && remain>=10){
                    remain-=10;
                    ten--;
                }
            }
            if(remain>=5){
                while(five>0 && remain>=5){
                    remain-=5;
                    five--;
                }
            }
            if(remain>0) return false;
            
        }
        return true;
    }
};