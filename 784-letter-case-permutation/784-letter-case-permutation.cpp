class Solution {
public:
    
    vector<string> vec;
    
    void backtrack(string s, string temp, int i, int n){
        
        if(i>=n){
            vec.push_back(temp);
            return;
        }
        if(s[i]>='a' && s[i]<='z'){
            backtrack(s,temp+s[i],i+1,n);
            backtrack(s,temp+(char)(s[i]-32),i+1,n);
        } 
        else if(s[i]>='A' && s[i]<='Z'){
            backtrack(s,temp+s[i],i+1,n);
            backtrack(s,temp+(char)(s[i]+32),i+1,n);
        }
        else backtrack(s,temp+s[i],i+1,n);
        
    }
    
    vector<string> letterCasePermutation(string s) {
        int n=s.size();
        int index=0;
        
        backtrack(s,"",0,n);
        
        return vec;
        
    }
};