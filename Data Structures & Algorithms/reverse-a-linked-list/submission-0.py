# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:

        if head is None:
            return None

        out = None
        curr = head

        while curr.next is not None:
            temp = curr
            curr = curr.next
            temp.next = out
            out = temp

        curr.next = out        

        return curr


        