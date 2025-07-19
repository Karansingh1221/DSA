class Solution {
public:
    bool canMeasureWater(int x, int y, int target) {
        return ((target%gcd(x,y)==0) && (x+y>=target));
    }
};