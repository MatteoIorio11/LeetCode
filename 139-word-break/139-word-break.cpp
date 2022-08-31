class Solution {
public:
    set<string> dict;
    map<string, bool> map;
    
    bool wordBreak(string s, vector<string>& wordDict) {

        for(int i = 0; i < wordDict.size(); i++){
            dict.insert(wordDict[i]);
        }
        
        return check(s);
    }
    
    bool check(string s){
        if(dict.find(s) != dict.end()){
            return true;
        }
        if(map.find(s) != map.end()){
            return map[s];
        }
        string temp1 = "";
        string temp2 = "";
        for(int i = 0; i < s.length(); i++){
            
            temp1 = s.substr(0, i);
            
            if(dict.find(temp1) != dict.end()){
                temp2 = s.substr(i, s.length());
                
                if(check(temp2)){
                    return map[temp2] = true;
                }
            }
        }
        return map[s] = false;
    }
};