class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> out = {};


        std::sort(nums.begin(), nums.end());
        int index = 0;
        while (index < nums.size()) {

            int val = nums[index];
            int l=index+1, r=nums.size() - 1;

            while (l < r) {
                if (l == index) {
                    l++; continue;
                }

                if (r == index) {
                    r--; continue;
                }

                int sum = val + nums[l] + nums[r];
                if (sum > 0) {
                    r--; 
                } else if (sum < 0) {
                    l++;
                } else {
                    out.push_back({val, nums[l], nums[r]});
                    r--;
                    l++;

                    while (l < r && nums[l] == nums[l-1]) l++;
                }
            }

            while (index < nums.size() && nums[index] == val)
                index++; 
        }

        return out;
    }
};
