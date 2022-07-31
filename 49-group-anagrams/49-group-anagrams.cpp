class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> v(0);
        map<string, vector<string>> m;
        int chars[26] = {0};
        for(string str : strs){
            string tmp = str;
            sort(tmp.begin(), tmp.end());
            m[tmp].push_back(str);
        }
        for(auto it = m.begin(); it != m.end(); it++){
            v.push_back(it->second);
        }
        return v;
    }
};