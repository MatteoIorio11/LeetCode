class Solution {
    public List<String> letterCombinations(String digits) {
        Map<Character, String> map = new HashMap<>();
        map.put('2', "abc");
        map.put('3', "def");
        map.put('4', "ghi");
        map.put('5', "jkl");
        map.put('6', "mno");
        map.put('7', "pqrs");
        map.put('8', "tuv");
        map.put('9', "wxyz");
        
        if(digits.equals("")){return List.of();}
        Queue<String> list = new LinkedList<>();
        build(map, list, digits.charAt(0));
        for(int i = 1; i < digits.length() ; i++){
            var c = digits.charAt(i);
            var len = list.size();
            for(int j = 0; j < len; j++){
                var str = list.poll();
                list.remove(str);
                for(var letter : map.get(c).toCharArray()){
                    var nstr=str+(String.valueOf(letter));
                    list.add(nstr);
                }
            }
        }
        return (List<String>)list;
    }
    private void build(Map<Character, String> map, Queue<String> list, char digit){
        for(var letter : map.get(digit).toCharArray()){
            list.add(String.valueOf(letter));
        }
    }
}