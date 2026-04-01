# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:

        def cmp(r1, r2):

            if r1 is None:
                return r1 == r2           
            
            if r2 is None:
                return r2 == r1
            
            if r1.val != r2.val:
                return False

            return cmp(r1.left, r2.left) and cmp(r1.right, r2.right)
    
        return cmp(p, q)
            
 