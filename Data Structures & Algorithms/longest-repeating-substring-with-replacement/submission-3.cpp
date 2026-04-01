class Solution {
public:
    int characterReplacement(string s, int k) {
       std::map<char, int> counts;
       int res = 0;
       int l=0, maxf = 0;
       for  (int r = 0; r < s.size(); r++) {
        counts[s[r]]++;
        maxf = max(maxf, counts[s[r]]);

        while ((r - l + 1) - maxf > k) {
            counts[s[l]]--;
            l++; 
        }

        res = max(res, r - l + 1);
       }

       return res;
    }
};
