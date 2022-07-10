class Solution {
    public List<String> topKFrequent(String[] words, int k) {
        List<String> out = new LinkedList<>();
        PriorityQueue<Map.Entry<String, Integer>> queue =
            new PriorityQueue<>((e1, e2) -> e2.getValue().compareTo(e1.getValue()) == 0 ? e1.getKey().compareTo(e2.getKey()) : e2.getValue().compareTo(e1.getValue()));
        Map<String, Integer> map = new HashMap<>();
        
        for(int i = 0; i < words.length; i++){
            map.merge(words[i], 1, (x, y) -> x+y);
        }
        for(var entry :  map.entrySet()){
            queue.add(entry);
        }

        System.out.println(queue);

        for(int i = 0; i < k; i++){
            out.add(queue.poll().getKey());
        }
        return out;
    }
}