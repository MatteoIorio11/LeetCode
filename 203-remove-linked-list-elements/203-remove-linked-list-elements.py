# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        dummy = ListNode(-1)
        dummy.next = head
        start, end = dummy, dummy
        curr = head
        
        while curr:
            if curr.val != val:
                end.next = curr
                end = end.next
            
            curr = curr.next
        
        end.next = None
        return start.next
        