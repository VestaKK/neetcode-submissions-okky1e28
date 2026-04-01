class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int, int> index_map = {};
        for (int i = 0; i < nums.size();  i++) {
            int num = nums[i];
            int cpt = target - num;
            if (index_map.count(cpt)) {
                return { index_map[cpt], i }; 
            } else {
                index_map[num] = i;
            }
        }

        return {-1, -1};
    }
};
