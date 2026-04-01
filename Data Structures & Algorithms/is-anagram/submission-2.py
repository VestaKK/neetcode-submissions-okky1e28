class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        counts = defaultdict(int)

        for c in s:
            counts[c] += 1
        
        for c in t:
            counts[c] -= 1

        for k, v in counts.items():
            if v > 0:
                return False

        return True