# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        if list1 == None and list2 != None:
            return list2
        if list2 == None and list1 != None:
            return list1
        if list1 == None and list2 == None:
            return None
        
        head = None
        if list1.val <= list2.val:
            head = ListNode(list1.val, head)
            list1 = list1.next
        else:
            head = ListNode(list2.val, head)
            list2 = list2.next
        
        while list1 and list2:
            if list1.val <= list2.val:
                head = ListNode(list1.val, head)
                list1 = list1.next
            else:
                head = ListNode(list2.val, head)
                list2 = list2.next
        
        while list1:
            head = ListNode(list1.val, head)
            list1 = list1.next
        
        while list2:
            head = ListNode(list2.val, head)
            list2 = list2.next
        
        nwList = None
        while head:
            nwList = ListNode(head.val, nwList)
            head = head.next
        
        
        return nwList