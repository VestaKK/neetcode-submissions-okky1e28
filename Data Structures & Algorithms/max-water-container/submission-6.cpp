class Solution {
public:
    int maxArea(vector<int>& heights) {

        int max_area = 0;  
        int l = 0, r = heights.size() - 1;
        while (l < r) {

            int dist = r - l;
            int height = min(heights[l], heights[r]);

            max_area = max(max_area, dist * height);

            if (heights[l] <= heights[r]) {
                l++;
            } else {
                r--;
            }
        }

        return max_area;
    }
};
