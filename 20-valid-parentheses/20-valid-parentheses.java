import java.util.Stack;
class Solution {
    public boolean isValid(String s) {
        Stack<String> stck = new Stack<>();
        for(int i = 0; i < s.length(); i++){
            var pare = String.valueOf(s.charAt(i));
            if(pare.equals("]")){
                var ok = remove(stck, pare, "[");
                if(ok){continue;}else{return false;}
            }else if(pare.equals(")")){
                var ok = remove(stck, pare, "(");
                if(ok){continue;}else{return false;}
            }else if(pare.equals("}")){
                var ok = remove(stck, pare, "{");
                if(ok){continue;}else{return false;}
            }else{
                stck.push(pare);
            }
        }
        return stck.empty() ? true : false;
    }
    
    private boolean remove(Stack<String> stck, String p, String type){
        while(!stck.empty()){
            var par = stck.pop();
            if(isOpen(par) && !par.equals(type)){
                return false;
            }else{
                return true;
            }
        }
        return false;
    }
    
    private boolean isClose(String p){
        return p.equals(")") || p.equals("]") || p.equals("}");
    }
    private boolean isOpen(String p){
        return p.equals("(") || p.equals("[") || p.equals("{");
    }
}