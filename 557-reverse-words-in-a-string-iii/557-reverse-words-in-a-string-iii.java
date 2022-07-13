class Solution {
    public String reverseWords(String s) {
        int st = 0;
        int en = 0;
        String newstring = "";
        for(int i = 0; i < s.length(); i++){
            char ch = s.charAt(i);
            if(ch == ' '){
                newstring += " ";
                continue;
            }else{
                st = i;
                en = i;
                while(en < s.length() && s.charAt(en) != ' '){en++;}
                en--;
               for(int j = en; j >= st; j--){
                    newstring+=String.valueOf(s.charAt(j));
                }
                i = en;
            }
        }
        return newstring;
    }
}