# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        if head == None or head.next == None or head.next.next == None:
            return False
        
        first = head
        second = head.next
        while first != second:
            if second != None:
                second = second.next
                first = first.next
                second = second.next if second != None else None
            else:
                return False
        
        return True