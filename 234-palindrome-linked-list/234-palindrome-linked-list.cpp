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
    bool isPalindrome(ListNode* head) {
        if(head == NULL){
            return true;
        }
        int ind = 0;
        ListNode* copy = head;
        vector<int> l;
        while(copy != NULL){
            l.push_back(copy->val);
            copy = copy->next;
        }
        ind = l.size()-1;
        cout << l[ind] << endl;
        
        while(head != NULL and ind >= 0){
            if(head->val == l[ind]){
                ind--;
                head = head->next;
                continue;
            }else{
                return false;
            }
        }
        return true;
    }
};