class Solution {
    double diagonal(int l,int b){
        return Math.sqrt((l*l)+(b*b));
    }
    public int areaOfMaxDiagonal(int[][] dimensions) {
        int n=dimensions.length;
        int maxarea=0;
        double d=0;
        for(int i=0;i<n;i++){
            if(d<diagonal(dimensions[i][0],dimensions[i][1])){
                d=diagonal(dimensions[i][0],dimensions[i][1]);
                maxarea=dimensions[i][0]*dimensions[i][1];
            }
            else if(d==diagonal(dimensions[i][0],dimensions[i][1])){
                maxarea=Math.max(maxarea,dimensions[i][0]*dimensions[i][1]);
            }
        }
        return maxarea;
    }
}