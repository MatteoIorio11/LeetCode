class Solution {
    public boolean isAnagram(String s, String t) {
        
        if(s.length() != t.length()){return false;}
        
        char[] temp = s.toCharArray();
        char[] temp2 = t.toCharArray();
        
        Arrays.sort(temp);
        Arrays.sort(temp2);
        
        for(int i = 0; i < temp.length; i++){
            if(temp[i] != temp2[i]){
                return false;
            }
        }
        return true;
    }
}