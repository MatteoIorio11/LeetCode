class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0;
        stack<int> q;
        int last_1 = 0, last_2 = 0, sum=0, exp = 1;
        string res("");
        while(!num1.empty() and !num2.empty()){
            last_1 = (int)(num1.back()-'0');
            last_2 = (int)(num2.back()-'0');
            sum = last_1 + last_2 + carry;
            carry += carry > 0 ? -1 : 0;
            if(sum >= 10){
                carry += sum/10; 
                sum = sum-10;
            }
            q.push(sum);
            
            num1.pop_back();
            num2.pop_back();
        }
        while(!num1.empty()){
            last_1 = (num1.back()-'0');
            sum = last_1+carry;
            carry += carry > 0 ? -1 : 0;

            if(sum >= 10){
                carry += sum/10; 
                sum = sum-10;
            }
            q.push(sum);
            num1.pop_back();
        }
        while(!num2.empty()){
            last_2 = (num2.back()-'0');
            sum = last_2+carry;
            carry += carry > 0 ? -1 : 0;
            if(sum >= 10){
                carry += sum/10; 
                sum = sum-10;
            }
            q.push(sum);
            num2.pop_back();
        }
        if(carry > 0){
            q.push(carry);
        }
        while(!q.empty()){
            int val = q.top();
            res.push_back((char)(val+'0'));
            q.pop();
        }
        return res;
    }
};