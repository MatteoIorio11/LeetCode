class Solution {
    public String getHint(String secret, String guess) {
        int cows = 0;
        int bulls = 0;
        int index = 0;
        Map<Character, Integer> map = new HashMap<>();
        
        for(;index < secret.length(); index++){
            var s1 = secret.charAt(index);
            var s2 = guess.charAt(index);
            if(s1 == s2){
                bulls++;
            }else{
                map.merge(s1, 1, (x,y) -> x+y);
            }
        }
        for(index = 0; index < guess.length(); index++){
            var s1 = secret.charAt(index);
            var s2 = guess.charAt(index);
            if(s1 != s2 && map.containsKey(s2) && map.get(s2) > 0){
                cows++;
                map.merge(s2, 1, (x,y) -> x-y);
            }
        }
        return bulls+"A"+cows+"B";
    }
}