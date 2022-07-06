class Solution {
    public int lengthOfLongestSubstring(String s) {
        if(s.length() == 1){return 1;}
        int max = 0;
        var i = 0;
        var j = 1;
        var len = 0;
        Map<String, Integer> map = new HashMap<>();
        while(i < s.length() && j <= s.length()){
            var sub = s.substring(i, j);
            len = sub.length();
                if(j < s.length() && !sub.contains(String.valueOf(s.charAt(j)))){
                    j++;
                }else{
                    map.put(sub, len);
                    max = Math.max(len, max);            
                    i+=1;
                    j = i+1;
                }
        }
        return Math.max(max, len);
    }
}