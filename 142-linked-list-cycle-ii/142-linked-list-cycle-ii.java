/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode detectCycle(ListNode head) {
        if(head == null || head.next == null || head.next.next == null){
            return null; 
        }
        ListNode first = head.next;
        ListNode second = head.next.next;
        while(first != second){
            if(second!= null){
                first = first.next;
                second = second.next;
                second = second != null ? second.next : null;  
            }else{
                return null;
            }
        }
        first = head;
        while(first != second){
            first = first.next;
            second = second.next;
        }
        return first;
    }
}