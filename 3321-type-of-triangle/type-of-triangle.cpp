class Solution {
public:
    string triangleType(vector<int>& nums) {
        int a=nums[0],b=nums[1],c=nums[2];
        if(a+b<=c || b+c<=a || a+c<=b){
            return "none";
        }
        if(a==b && b==c){
            return "equilateral";
        }else if(a==b || a==c || b==c){
            return "isosceles";
        }else{
            return "scalene";
        }
    }
};