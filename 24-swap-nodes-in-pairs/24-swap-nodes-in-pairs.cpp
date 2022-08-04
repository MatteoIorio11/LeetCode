/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL){
            return head;
        }
        vector<int> l(0);
        ListNode* a = new ListNode(-1);
        ListNode* ans = a;
        int index = 1;
        while(head != NULL){
            l.push_back(head->val);
            head = head->next;
        }
        for(int i = 0; i < l.size(); i+=2){
            if(i+1 < l.size()){
                ans->next = new ListNode(l[i+1]);
                ans = ans->next;
            }
            ans->next = new ListNode(l[i]);
            ans = ans->next;
        }
        return a->next;
    }
};