class Solution {
public:
    int trap(vector<int>& height) {

        vector<int> prefix(height.size(), 0);
        vector<int> suffix(height.size(), 0);

        int max_prefix = 0;
        for (int i = 0; i<height.size(); i++) {
            prefix[i] = max_prefix;
            max_prefix = max(max_prefix, height[i]);
        }

        int max_suffix  = 0;
        for (int i = height.size() - 1; i>=0; i--) {
            suffix[i] = max_suffix;
            max_suffix = max(max_suffix, height[i]);
        }


        int sum = 0;
        for (int i = 0; i < height.size(); i++) {
            int water = min(prefix[i], suffix[i]) - height[i];

            if (water > 0) sum += water;
        }
        return sum;
    }
};
