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
    public ListNode removeNthFromEnd(ListNode head, int n) {
        
        List<ListNode> list = new LinkedList<>();
        var copy = head;
        while(copy != null){
            list.add(copy);
            copy = copy.next;
        }
        ListNode newList = null;
        list.remove(list.size()-n);
        for(int i = list.size()-1; i >= 0 ; i--){
            newList = new ListNode(list.get(i).val, newList);
        }
        return newList;
    }
}