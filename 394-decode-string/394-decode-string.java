class Solution {
    public String decodeString(String s) {
        Stack<String> strings = new Stack<>();
        for(int i = 0; i < s.length(); i++){
            var ch = s.charAt(i);
            if(ch == ']'){
                var string = getString(strings);
                var numb = getInteger(strings);
                System.out.println(numb);
                var build = "";
                for(int j = 0; j < numb; j++){
                    build = build+string;
                }
                strings.push(build);
            }else{
                strings.push(String.valueOf(ch));
                //System.out.println(strings);
            }
        }
        var out = "";
        while(!strings.isEmpty()){
            out = strings.pop() + out;
        }
        return out;
    }
    
    private int getInteger(Stack<String> stck){
        var numb = "";
        //System.out.println(stck);
        while(!stck.isEmpty()){
            var str = stck.peek();
            var ch = str.charAt(0);
            if(Character.isDigit(ch)){
                stck.pop();
                numb = String.valueOf(ch) + numb;
            }else{
                break;
            }
        }
        return numb.equals("") ? 0 : Integer.valueOf(numb);
    }
    
    private String getString(Stack<String> stck){
        var out = "";
        while(!stck.isEmpty()){
            var str = stck.pop();
            if(str.equals("[")){
                return out;
            }
            out=str+out;
        }
        return out;
    }
}