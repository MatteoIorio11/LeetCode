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
    ListNode* partition(ListNode* head, int x) {
        ListNode* before_head = new ListNode(0);
        ListNode* less = before_head;
        ListNode* after_head = new ListNode(0);
        ListNode* greather = after_head;
        ListNode* copy = head;
        while(copy != NULL){
            if(copy ->val < x){
                less->next = copy;
                less = less->next;
            }else{
                greather->next = copy;
                greather = greather->next;
            }
            copy = copy->next;
        }
        greather->next = NULL;
        less->next = after_head->next;
        return before_head->next;
    }
};