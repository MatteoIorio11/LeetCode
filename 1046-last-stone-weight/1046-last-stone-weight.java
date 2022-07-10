class Solution {
    public int lastStoneWeight(int[] stones) {
        PriorityQueue<Integer> weights = new PriorityQueue<>((x, y) -> y.compareTo(x));
        for(int i = 0; i < stones.length; i++){
            weights.add(stones[i]);
        }
        
        
        while(weights.size() > 1){
            System.out.println(weights);
            if(weights.size() >= 2){
                var y = weights.poll();
                var x = weights.poll();
                if(x != y){
                    weights.add(y-x);
                }
            }
        }
        return  weights.size() == 1 ? weights.poll() : 0;
    }
}