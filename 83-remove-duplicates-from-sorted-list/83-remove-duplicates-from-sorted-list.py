# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        elem = dict()
        prec = None
        copy = head
        while head:
            if head.val not in elem:
                elem[head.val] = 1
            else:
                while head and head.val in elem:
                    head = head.next
                elem[head.val if head != None else 0] = 1
                prec.next = head
            
            prec = head
            head = head.next if head != None else None
        
        return copy
                