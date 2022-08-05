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
    void reorderList(ListNode* head) {
        if(head == NULL){
            return;
        }
        vector<int> l(0);
        ListNode* cp = head;
        ListNode* ans = cp;
        int l_p = 1, r_p = 0, i = 0;
        while(cp != NULL){
            l.push_back(cp->val);
            cp = cp->next;
        }
        r_p = l.size();
        while(l_p < r_p){
            if(i % 2 != 0){
                ans->next = new ListNode(l[l_p]);
                ans = ans->next;
                l_p++;
            }else{
                ans->next = new ListNode(l[r_p-1]);
                ans = ans->next;
                r_p--;
            }
            i++;
        }
    }
};