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
        if (head == null){
            return null;
        }
        ListNode nwlist= null;
        while (head != null){
            if(head.val != val){
                nwlist = new ListNode(head.val, nwlist);
            }
            head = head.next;
        }
        head = null;
        while (nwlist != null){
            head = new ListNode(nwlist.val, head);
            nwlist = nwlist.next;
        }
        return head;
    }
}