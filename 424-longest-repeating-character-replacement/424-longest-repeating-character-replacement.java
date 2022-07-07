class Solution {
    public int characterReplacement(String s, int k) {
        int window_start = 0;
        int window_end = 0;
        Map<Character, Integer> map = new HashMap<>();
        
        int max = 0;
        int max_count = 0;
        for(window_end = 0; window_end < s.length(); window_end++){
            map.merge(s.charAt(window_end), 1, (prec, newv) -> prec+newv);
            max_count = Math.max(max_count, map.get(s.charAt(window_end)));
            
            
            while(window_end - window_start - max_count + 1 > k){
                map.merge(s.charAt(window_start), 1, (prec, newv) -> prec-newv);
                max_count = Math.max(max_count, map.get(s.charAt(window_start)));
                window_start++;
            }
            max = Math.max(max, window_end - window_start +1);
        }
        return max;
    }
}