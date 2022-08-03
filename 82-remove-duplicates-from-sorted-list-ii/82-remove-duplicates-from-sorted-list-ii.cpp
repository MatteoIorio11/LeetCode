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
            return head;
        }
        map<int,int> m;
        ListNode* l1 = head;
        ListNode* r1 = head->next;
        ListNode* a = new ListNode(-1);
        ListNode* ans = a;
        while(l1 != NULL and r1 != NULL){
            if(l1->val != r1->val){
                ans->next = new ListNode(l1->val);
                ans = ans->next;
                l1 = l1->next;
                r1 = r1->next;
            }else{
                while(r1 != NULL and l1->val == r1->val){
                    r1 = r1->next;
                }
                l1 = r1;
                r1  = r1 != NULL ? r1->next : NULL;
            }
        }
        if(l1 != NULL and r1 == NULL){
            ans->next = new ListNode(l1->val);
        }
        return a->next;
    }
};