"""
# Definition for a Node.
class Node:
    def __init__(self, val: int = 0, left: 'Node' = None, right: 'Node' = None, next: 'Node' = None):
        self.val = val
        self.left = left
        self.right = right
        self.next = next
"""

class Solution:
    def connect(self, root: 'Optional[Node]') -> 'Optional[Node]':
        q = []
        q.append(root)
        while q:
            prec = None
            last = None
            size = len(q)
            for i in range(size):
                last = q.pop(0)
                if last != None:
                    q.append(last.left)
                    q.append(last.right)
                
                if prec != None:
                    prec.next = last
                
                prec = last
            
            if last != None:
                last.next = None
            
        return root