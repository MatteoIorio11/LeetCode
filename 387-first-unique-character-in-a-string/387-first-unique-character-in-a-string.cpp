class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> m;
        map<char, int> ind;
        for(int i = 0; i < s.size(); i++){
            m[s[i]]++;
            ind[s[i]]=i;
        }
        for(int i = 0; i < s.size(); i++){
            if(m[s[i]] == 1){
                return ind[s[i]];
            }
        }
        return -1;
    }
};