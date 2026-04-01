class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:

        if len(s1) > len(s2):
            return False

        counts1 = defaultdict(int)
        counts2 = defaultdict(int)
        for c in s1:
            counts1[c] += 1

        lenS = len(s1)
        accum = 0

        l = 0
        for i, c in enumerate(s2):

            if c in counts1:
                counts2[c] += 1
                accum += 1

            if i - l + 1 > lenS:
                if s2[l] in counts1:
                    counts2[s2[l]] -= 1
                    accum -= 1
                l += 1

            if c in counts1 and counts2[c] > counts1[c]:
                while counts2[c] > counts1[c]:
                    if s2[l] in counts1:
                        counts2[s2[l]] -= 1
                        accum -= 1
                    l += 1

            if accum == lenS:
                return True 

        return False

