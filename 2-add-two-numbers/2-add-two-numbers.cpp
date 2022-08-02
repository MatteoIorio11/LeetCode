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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        int sum = 0;
        ListNode* ans = new ListNode(-1);
        ListNode* head = ans;
        while(l1 != NULL or l2 != NULL){
            sum = carry;
            if(l1 != NULL){
                sum+=l1->val;
                l1 = l1->next;

            }
            if(l2 != NULL){
                sum+=l2->val;
                l2 = l2->next;
            }
            carry += carry > 0 ? -1: 0;
            if(sum >= 10){
                carry++;
                sum = sum-10;
            }
            head->next = new ListNode(sum);
            head = head->next;
        }
        if(carry > 0){
            head->next = new ListNode(carry);
        }
        return ans->next;
    }
};