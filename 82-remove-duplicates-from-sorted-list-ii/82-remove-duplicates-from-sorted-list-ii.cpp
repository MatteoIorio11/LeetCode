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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL){
            return NULL;
        }
        if(head->next == NULL){
            return head;
        }
        ListNode* next = head;
        ListNode* list = new ListNode(-1);
        ListNode* l = list;
        while(next != NULL){
            if(next->next != NULL and next->next->val == next->val){
                while(next != NULL and next->next != NULL and next->val == next->next->val){
                    next = next->next;
                }
            }else{
                l->next = new ListNode(next->val);
                l = l->next;
            }
            next = next->next;
        }
        return list->next;
    }
};