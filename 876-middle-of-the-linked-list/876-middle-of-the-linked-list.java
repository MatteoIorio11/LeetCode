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
import java.util.List;
import java.util.LinkedList;
class Solution {
    public ListNode middleNode(ListNode head) {
        List<Integer> list = new LinkedList<>();
        while(head != null){
            //salvo il valore
            list.add(head.val);
            head = head.next;
        }
        ListNode out = null;
        for(int i =  list.size()-1 ; i >= list.size()/2; i--){
            out = new ListNode(list.get(i), out);
        }
        return out;
    }
}