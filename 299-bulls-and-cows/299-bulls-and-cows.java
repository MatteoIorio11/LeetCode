class Solution {
    public String getHint(String secret, String guess) {
        int cows = 0;
        int bulls = 0;
        int index = 0;
        int[] map = new int[10];
        
        for(;index < secret.length(); index++){
            var s1 = secret.charAt(index) - '0';
            var s2 = guess.charAt(index) - '0';
            if(s1 == s2){
                bulls++;
            }else{
                if(map[s1] < 0) {cows++;}
                if(map[s2] > 0) {cows++;}
                map[s1]++;
                map[s2]--;
            }
        }
        return bulls+"A"+cows+"B";
    }
}