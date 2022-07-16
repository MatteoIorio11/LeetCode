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
import java.util.LinkedList;
import java.util.List;
class Solution {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        List<Integer> list = new LinkedList<>(); 
        while(list1 != null){
            list.add(list1.val);
            list1 = list1.next;
        }
        while(list2 != null){
            list.add(list2.val);
            list2 = list2.next;
        }
        var l = list.stream().sorted((v1,v2) -> v2.compareTo(v1)).toList();
        ListNode out = null;
        for(int i = 0; i < l.size(); i++){
            var val = l.get(i);
            out = new ListNode(val, out);
        }
        return out;
    }
}