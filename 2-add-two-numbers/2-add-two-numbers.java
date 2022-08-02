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
import java.math.BigInteger;
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        //GESTIRE INPUT CORPOSI
        String num1 = "";
        String num2 = "";
        while(l1 != null){
            num1 += String.valueOf(l1.val);
            l1 = l1.next;
        }
        while(l2 != null){
            num2 += String.valueOf(l2.val);
            l2 = l2.next;
        }
        StringBuilder sb=new StringBuilder(num1);  
        sb.reverse();  
        num1 = sb.toString();
        sb=new StringBuilder(num2);  
        sb.reverse();  
        num2 = sb.toString();
        BigInteger n1 = new BigInteger(num1);
        BigInteger n2 = new BigInteger(num2);
        System.out.println(n1);
        System.out.println(n2);
        var r = n1.add(n2);
        String res = String.valueOf(r.toString());
        ListNode out = null;
        for(int i = 0 ; i < res.length(); i++){
            out = new ListNode(Integer.valueOf(String.valueOf(res.charAt(i))), out);
        }
        return out;
    }
}