class Solution {
public:
    
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        int index = 0;
        backtracking(s, index, ans);
        return ans;
    }
    
    void backtracking(string s, int index, vector<string>& ans){
        if(index == s.size()){
            ans.push_back(s);
            return;
        }
        
        backtracking(s, index+1, ans);
        if(isalpha(s[index])){
            if(isupper(s[index])){
                s[index] = tolower(s[index]);
                backtracking(s, index+1, ans);
                s[index] = toupper(s[index]);
            }else{
                s[index] = toupper(s[index]);
                backtracking(s, index+1, ans);
                s[index] = tolower(s[index]);
            }
        }
    }
};