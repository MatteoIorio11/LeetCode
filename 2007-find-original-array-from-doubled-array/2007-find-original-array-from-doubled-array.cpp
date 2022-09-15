class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        if(changed.size() % 2 != 0){
            return {};
        }
        
        unordered_map<int,int> freqs;
        vector<int> keys;
        vector<int> original;
        for(int x : changed){
            freqs[x]++;
        }
        
        for(auto it : freqs){
            keys.push_back(it.first);
        }
        
        sort(keys.begin(), keys.end(), [](int a, int b) {return abs(a) < abs(b);});
        
        for(int val : keys){
            if(freqs[val] > freqs[2*val]){
                return {};
            }
            for(int i = 0; i < freqs[val]; ++i, freqs[2*val]--){
                original.push_back(val);
            }
        }
        return original;
    }
};