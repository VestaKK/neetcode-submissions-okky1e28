class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::map<map<char, int>, vector<string>> res = {};
        for (const string& s: strs) {
            map<char, int> anagram= {};
            for (char c : s) {
                anagram[c]++;
            }
            res[anagram].push_back(s);
        }
        
        vector<vector<string>> result;
        for (const auto& entry : res) {
            result.push_back(entry.second);
        }
        return result;
    }
};
