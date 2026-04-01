# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:

        h1 = list1
        h2 = list2

        if h1 is None:
            return h2
        if h2 is None:
            return h1

        start = None
        end = None

        if h1.val < h2.val:
            end = h1
            start = h1
            h1 = h1.next
            end.next = None
        else:
            end = h2
            start = h2 
            h2 = h2.next
            end.next = None

        while h1 is not None and h2 is not None:
            if h1.val < h2.val:
                end.next = h1
                end = end.next
                h1 = h1.next
                end.next = None
            else:
                end.next = h2
                end = end.next
                h2 = h2.next
                end.next = None

        if h1 is None:
            end.next = h2
        if h2 is None:
            end.next = h1

        return start
                







