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
        List<Integer> out = new LinkedList<>();
        for(var list : lists){
            while(list != null){
                out.add(list.val);
                list = list.next;
            }
        }
        List<Integer> list = out.stream().sorted((x,y) -> x.compareTo(y)).toList();
        System.out.println(list);
        ListNode finalList = null;
        for(int i = list.size() -1; i >= 0; i--){
            finalList = new ListNode(list.get(i), finalList);
        }
        return finalList;
    }
}