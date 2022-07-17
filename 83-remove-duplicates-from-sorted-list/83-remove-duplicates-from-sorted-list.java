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
    public ListNode deleteDuplicates(ListNode head) {
        Map<Integer, Integer> map = new HashMap<>();
        ListNode prec = null;
        ListNode copy = head;
        while(head != null){
            if(!map.containsKey(head.val)){
                map.put(head.val, 1);
            }else{
                while( head != null && map.containsKey(head.val)){head = head.next;}
                map.put(head != null ? head.val : 0, 1);
                prec.next = head;
            }
            prec = head;
            head = head != null ? head.next : null;
        }
        return copy;
    }
}