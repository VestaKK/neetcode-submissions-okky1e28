class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length())
            return false;

        std::unordered_map<char, int> hash_map_s = {};
        std::unordered_map<char, int> hash_map_t = {};

        for (char c : s) {
            hash_map_s[c]++;
        }

        for (char c : t) {
            hash_map_t[c]++;
        }

        if (hash_map_t != hash_map_s)
            return false;

        return true;
    }
};
