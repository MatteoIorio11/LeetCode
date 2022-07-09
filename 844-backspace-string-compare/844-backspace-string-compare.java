class Solution {
    public boolean backspaceCompare(String s, String t) {
        Stack<Character> stack_s1 = new Stack<>();
        Stack<Character> stack_s2 = new Stack<>();
        for(int i = 0; i < s.length(); i++){
            char cr = s.charAt(i);
            if(cr != '#'){
                stack_s1.push(cr);
            }else{
                if(!stack_s1.empty()){stack_s1.pop();}
            }
        }
        for(int i = 0; i < t.length(); i++){
            char cr = t.charAt(i);
            if(cr != '#'){
                stack_s2.push(cr);
            }else{
                if(!stack_s2.empty()){stack_s2.pop();}
            }
        }
        return stack_s1.equals(stack_s2);
    }
}