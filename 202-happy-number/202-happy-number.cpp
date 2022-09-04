class Solution {
public:
    bool isHappy(int n) {
        int upper_b = (INT_MAX-1)/2, cont = 0;
        string num = to_string(n);
        long sum = 0;
        set<int> s;
        while(cont < upper_b){
            sum = 0;
            for(int i = 0; i < num.size(); i++){
                int val = (int)(num[i]-'0');
                sum += pow(val, 2);
            }
            if(s.find(sum) != s.end()){
                return false;
            }else{
                s.insert(sum);
            }
            if(sum == 1){
                return true;
            }else if(sum == 0){
                return false;
            }
            cont++;
            num = to_string(sum);
        }
        return false;
    }
};