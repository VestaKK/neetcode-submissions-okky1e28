class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        set<char> check;
        int l=0, r=0;
        int max=0;
        while (r < s.size()) {
            while (l < r && check.count(s[r])) {
                check.erase(s[l]);
                l++;
            }
            if (!check.count(s[r])) { 
                max = std::max(max, r - l + 1);
                check.insert(s[r]);
            }
            r++;
        }

        return max;
    }
};
