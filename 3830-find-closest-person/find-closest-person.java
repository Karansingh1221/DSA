class Solution {
    public int findClosest(int x, int y, int z) {
        int diff1=Math.abs(x-z);
        int diff2=Math.abs(y-z);
        if(diff1==diff2) return 0;
        return diff1<diff2?1:2;
    }
}