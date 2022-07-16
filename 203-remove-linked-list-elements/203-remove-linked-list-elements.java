/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeElements(ListNode head, int val) {
        ListNode dummy = new ListNode(-1);
        dummy.next = head;
        ListNode start = dummy, end = dummy;
        ListNode curr = head;
        while(curr != null){
            if(curr.val != val){
                end.next = curr;
                end = end.next;
            }
            curr = curr.next;
        }
        end.next = null;
        return start.next;
    }
}