class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        int max_el = nums[0];
        for(int num : nums){
            m[num]+=1;
            if(m[num] > m[max_el]){
                max_el = num;
            }
        }
        return max_el;
    }
};