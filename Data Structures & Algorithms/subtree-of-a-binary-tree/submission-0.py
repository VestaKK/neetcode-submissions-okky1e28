# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:   
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:

        def cmp(p, q):

            if p is None:
                return p == q
            if q is None:
                return q == p
            if p.val != q.val:
                return False

            return cmp(p.left, q.left) and cmp(p.right, q.right)
        
        def sub(p, q):

            if not q:
                return True
            if not p:
                return False
            if cmp(p, q):
                return True

            return sub(p.left, q) or sub(p.right, q)
        
        return sub(root, subRoot)