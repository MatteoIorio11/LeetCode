class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        if(ransomNote.length() > magazine.length()){
            return false;
        }
        int match = 0;
        Map<Character, Integer> mapRanso = new HashMap<>();
        Map<Character, Integer> mapMagazine = new HashMap<>();
        
        for(char ch : ransomNote.toCharArray()){
            mapRanso.put(ch, mapRanso.getOrDefault(ch, 0)+1);
        }
        
        for(char ch : magazine.toCharArray()){
            mapMagazine.put(ch, mapMagazine.getOrDefault(ch, 0)+1);
        }
        for(var entry : mapRanso.entrySet()){
            if(mapMagazine.containsKey(entry.getKey())){
                if(mapMagazine.get(entry.getKey()) < entry.getValue()){
                    return false;
                }else{
                    match+=entry.getValue();
                }
            }            
        }
        return match == ransomNote.length();
    }

}