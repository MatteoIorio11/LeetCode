class Solution {
public:
    string longestPalindrome(string s) {
        int max_len = 0;
        string ans("");
        for(int c = 0; c < s.size(); c++){
            foo(s, ans, c,c, max_len);
            foo(s, ans, c, c+1, max_len);
        }
        return ans;
    }
    void foo(string s, string& ans, int l, int r, int& max_len){
        while(l >= 0 && r < s.size() && s[l] == s[r]){
            if(r-l+1 > max_len){
                max_len = (r-l+1);
                ans = s.substr(l, max_len);
            }

            l--;
            r++;
        }
    }
};