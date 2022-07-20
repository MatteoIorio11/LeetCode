class Solution {
    public int numMatchingSubseq(String s, String[] words) {
        Map<String, Integer> map = new HashMap<>();
        for(String word : words){
            map.merge(word, 1, (x, y) -> x+y); //map.getOrdDefault(word, 0)+1);
        }
        
        int i = 0;
        int j = 0;
        int ans = 0;
        char[] s_chars = s.toCharArray();
        for(String key : map.keySet()){
            char[] tmp = key.toCharArray();
            while(i < s_chars.length && j < tmp.length){
                if(s_chars[i] == tmp[j]){
                    i++;
                    j++;
                }else{
                    i++;
                }
            }
            if(j == tmp.length){
                ans+=map.get(key);
            }
            i = 0;
            j = 0;
        }
        return ans;
    }
}