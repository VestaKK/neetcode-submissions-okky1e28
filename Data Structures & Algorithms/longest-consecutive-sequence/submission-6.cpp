class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if (nums.size() == 0) {
            return 0;
        }
        set<int> values = {};

        for (int num : nums) {
            values.insert(num);
        }

        int max_length = 1;
        for (int num: nums) {
            if (values.count(num-1)) { 
                int start = num;
                int length = 1;
                while (values.count(start++)) {
                    max_length = std::max(max_length, ++length);
                }
            }
        }

        return max_length;
    }
};
