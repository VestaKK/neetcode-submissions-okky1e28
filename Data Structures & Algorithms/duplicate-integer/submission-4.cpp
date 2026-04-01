class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> mySet = {};

        for (int num : nums) {
           if (mySet.count(num)) {
            return true;
           } else {
            mySet.insert(num);
           }
        }

        return false;
    }
};