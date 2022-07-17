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
    public ListNode mergeKLists(ListNode[] lists) {
        PriorityQueue<Integer> out = new PriorityQueue<>((x,y) ->y.compareTo(x));
        for(var list : lists){
            while(list != null){
                out.add(list.val);
                list = list.next;
            }
        }
        System.out.println(out);
        ListNode finalList = null;
        for(int i = out.size() -1; i >= 0; i--){
            finalList = new ListNode(out.poll(), finalList);
        }
        return finalList;
    }
}