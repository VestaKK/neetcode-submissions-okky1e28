
class Solution:
    def isValid(self, string: str) -> bool:
        stack = []

        for s in string:
            if s == ')' and (len(stack) == 0 or stack.pop() != '('):
                return False
            elif s == '}' and (len(stack) == 0 or stack.pop() != '{'):
                return False
            elif s == ']' and (len(stack) == 0 or stack.pop() != '['):
                return False
            elif s in ['(', '[', '{']:
                stack.append(s)
        return len(stack) == 0