class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        sett = set()

        n = len(s)
        l, r = 0, 0

        out = 0
        while l < n and r < n:
            if s[r] not in sett:
                sett.add(s[r])
                r += 1
            else:
                while s[l] != s[r] and l < r:
                    sett.remove(s[l])
                    l += 1
                sett.remove(s[l]) 
                l += 1
            out = max(out, r - l)
        return out