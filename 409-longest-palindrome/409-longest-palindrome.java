import java.util.Arrays;
import java.util.Collections;
class Solution {
    public int longestPalindrome(String s) {
        System.out.println(s.length());
        if(s.length() == 1){
            return 1;
        }
        int[] chars = new int[512];
        //int[] best = new int[255];
        for(int i = 0; i < s.length(); i++){
            chars[s.charAt(i)]++;
        }
        int len = 0;
        var disp = false;
        Arrays.sort(chars);
        for(int i = chars.length-1; i >=0 ; i--){
            System.out.println(chars[i]);
            if(chars[i] % 2 == 0){
                len+=chars[i];
            }else if(chars[i] % 2 != 0 && disp == false){
                disp = true;
                len+=chars[i];
            }else if(chars[i] % 2 != 0 && disp == true && chars[i] > 0){
                len+=chars[i]-1;
            }
    }
        return len;
    }
}