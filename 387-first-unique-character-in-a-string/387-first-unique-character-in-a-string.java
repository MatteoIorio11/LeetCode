class Solution {
    public int firstUniqChar(String s) {
        Map<Character, Integer> chars = new HashMap<>();
        
        for(char ch : s.toCharArray()){
            chars.merge(ch, 1, (x,y) -> x+y);
        }
        for(int i = 0; i < s.length(); i++){
            char ch = s.charAt(i);
            if(chars.containsKey(ch) && chars.get(ch) == 1){
                return i;
            }
        }
        return -1;
    }
    
    
}