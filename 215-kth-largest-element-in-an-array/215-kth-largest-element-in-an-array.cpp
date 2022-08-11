class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> q;
        for(int num : nums){
            q.push(num);
        }
        while(k > 0){
            if(k == 1){
                return q.top();
            }
            k--;
            q.pop();
        }
        return -1;
    }
};