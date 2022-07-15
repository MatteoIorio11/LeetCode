class Solution {
    public boolean checkInclusion(String s1, String s2) {
        
        if(s1.length() > s2.length()){return false;}
        
        int[] chars1 = new int[26];
        
        for(int i = 0; i < s1.length(); i++){
            chars1[s1.charAt(i)-'a']++;
        }
        for(int i = 0; i <= s2.length() - s1.length(); i++){
            int[] chars2 = new int[26];
            for(int j = 0; j < s1.length(); j++){
                chars2[s2.charAt(i+j) -'a']++;
            }
            if(match(chars1, chars2)){
                return true;
            }
        }
        return false;
    }
    
    private boolean match(int[] chars1, int[] chars2){
        for(int i = 0; i < 26; i++){
            if(chars1[i] != chars2[i]){
                return false;
            }
        }
        return true;
    }
}