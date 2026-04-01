class Solution:
    def isPalindrome(self, s: str) -> bool:
        a = "".join(c.lower() for c in s if c.isalnum())
        print(a)
        return a == a[::-1]
        