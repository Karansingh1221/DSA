class Solution {
    public int lastStoneWeight(int[] stones) {
        PriorityQueue<Integer> pq=new PriorityQueue<Integer>(Collections.reverseOrder());
        int n=stones.length;
        for(int i=0;i<n;i++){
            pq.add(stones[i]);
        }
        while(pq.size()>1){
            int t1=pq.peek();
            pq.remove(t1);
            int t2=pq.peek();
            pq.remove(t2);
            int left=t1-t2;
            if(left!=0) pq.add(left);
        }
        if(pq.isEmpty()) return 0;
        return pq.peek();

    }
}