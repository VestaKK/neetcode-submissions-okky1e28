class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefixs(nums.size());
        vector<int> suffixs(nums.size());
        vector<int> result(nums.size());

        int prefix = 1;
        for (int i = 0; i < nums.size(); i++) {
            prefixs[i] = prefix;
            prefix *= nums[i];
        }

        int suffix = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            suffixs[i] = suffix;
            suffix *= nums[i];
        }

        for (int i = 0; i < nums.size(); i++) {
            result[i] = prefixs[i] * suffixs[i];
        }

        return result;
    }
};
