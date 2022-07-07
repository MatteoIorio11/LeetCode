class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        if(p.length() > s.length()){return List.of();}
        
        Map<Character, Integer> mapP = new HashMap<>();
        for(int i = 0; i < p.length(); i++){
            var chr = p.charAt(i);
            mapP.merge(chr, 1, (prec, newv) -> prec+newv);
        }
        
        List<Integer> out = new LinkedList<>();
        Map<Character, Integer> mapS = new HashMap<>();
        var start = 0;
        var end = start+p.length();
        var sub = s.substring(start, start+p.length());
        
        for(int j = 0; j < sub.length(); j++){
            var cr = sub.charAt(j);
            mapS.merge(cr, 1, (prec, newv) -> prec+newv);
        }
        for(int i = 0; i < s.length(); i++){
            if(mapP.equals(mapS)){
                out.add(i);
            }
            var st = s.charAt(start);
            mapS.merge(st, 0, (prec, newv)-> prec-1);
            if(mapS.get(st) <= 0){mapS.remove(st);}
            start++;
            if(end >= s.length()){break;}
            var ed = s.charAt(end);
            mapS.merge(ed, 1, (prec, newV) ->  prec+newV);
            end++;

        }
        return out;
    }
}