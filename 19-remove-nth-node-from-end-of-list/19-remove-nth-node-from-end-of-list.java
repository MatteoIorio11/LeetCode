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
        
        //List<ListNode> list = new LinkedList<>();
        var copy = head;
        var size = 0;
        while(copy != null){
            size++;
            copy = copy.next;
        }
        copy = head;
        var pos = size-n;
        if(pos == 0){
            head = head.next;
            return head;
        }
        if(size == 1){
            return null;
        }
        for(int i = 0; i <= pos; i++){
            if(i == pos-1){
                copy.next = copy.next.next;
                break;
            }else{
                copy = copy.next;
            }
        }
        copy = head;
        return copy;
    }
}