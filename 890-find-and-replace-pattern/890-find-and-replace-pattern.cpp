class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        map<char, char> m;
        int i = 0;
        vector<string> v;
        bool find = true;
        for(string s : words){
            for(i = 0; i < pattern.size(); i++){
                if(m.find(pattern[i]) != m.end()){
                    if(m[pattern[i]]  != s[i]){
                        find = false;
                        break;
                    }
                }else{
                    m[pattern[i]] = s[i];
                }
            }
            if(find){
                if(check(m)){
                    v.push_back(s);
                }
            }
            m.clear();
            find = true;
        }
        return v;
    }
    bool check(map<char, char> m){
        bool c[26] = {false};
        for(auto it = m.begin(); it != m.end(); it++){
            if(c[it->second-'a']){
                return false;
            }else{
                c[it->second-'a'] = true;
            }
        }
        return true;
    }
};