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
    public ListNode reverseBetween(ListNode head, int left, int right) {
        ListNode tail = null;
        ListNode prev = null;
        ListNode succ = null;
        ListNode tmpHead = head;
        int cont = 1;
        ListNode last = null;
        while(head != null){
            if(cont >= left && cont <= right){
                tail = new ListNode(head.val, tail);
            }else if(cont < left){
                prev = new ListNode(head.val, prev);
            }else if(cont > right){
                last = head;
                break;
            }
            cont++;
            head = head.next;
        }
        var tmp = tail;
        while(tmp.next != null){
            tmp= tmp.next;
        }
        tmp.next = last;
        head = tmpHead;
        cont = 1;
        while(tmpHead != null){
            if(cont+1 == left && left > 1){
                tmpHead.next = tail;
                break;
            }else if(left == 1 && cont == left){
                System.out.println(tail.val);
                head = tail;
                break; 
            }
            tmpHead = tmpHead.next;
            cont++;
        }
        return head;
    }
}