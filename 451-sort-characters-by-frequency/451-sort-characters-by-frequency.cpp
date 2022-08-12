class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int,char>> q;
        sort(s.begin(), s.end());
        int freq = 1;
        string ans;
        for(int i = 0; i < s.size(); i++){
            if(i+1 < s.size() and s[i] == s[i+1]){
                freq++;
            }else{
                q.push({freq, s[i]});
                freq = 1;
            }
        }
        while(!q.empty()){
            int len = q.top().first;
            char word = q.top().second;
            for(int i = 0; i < len; i++){
                ans+=word;
            }
            q.pop();
        }
        return ans;
    }
};