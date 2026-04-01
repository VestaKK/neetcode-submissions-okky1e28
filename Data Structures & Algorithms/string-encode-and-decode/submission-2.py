class Solution:

    def encode(self, strs: List[str]) -> str:
        out = ""
        for s in strs:
            out += str(len(s)) + "?" + s
        return out

    def decode(self, s: str) -> List[str]:
        out = [] 
        prev, curr = 0, 0
        while curr < len(s):
            if s[curr] == "?":
                l = int(s[prev:curr])
                out.append(s[curr + 1: curr + l + 1])
                curr += l + 1
                prev = curr
            else:
                curr += 1

        return out
            

