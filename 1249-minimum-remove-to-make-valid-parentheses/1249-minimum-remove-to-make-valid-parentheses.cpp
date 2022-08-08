class Solution {
public:
    string minRemoveToMakeValid(string s) {
        deque<int> stk;
        for(int i = 0; i < s.size(); i++){
            if(isalpha(s[i])){
                continue;
            }else{
                if(s[i] == '('){
                    stk.push_front(i);
                }else if(!stk.empty() and s[stk.front()] == '('){
                    stk.pop_front();
                }else{
                    stk.push_front(i);
                }
            }
        }
        string ans("");
        set<int> set_i(begin(stk), end(stk));
        for(int i = 0; i < s.size(); i++){
            if(set_i.find(i) == set_i.end()){
                ans+=s[i];                
            }
        }
        return ans;
    }

};