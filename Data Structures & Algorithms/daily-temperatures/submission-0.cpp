class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        if (temperatures.size() == 1) {
            return {0};
        }
        vector<int> out(temperatures.size(), 0);

        // tracking indicies
        stack<int> indicies;
        indicies.push(0);
        for (int i=1; i < temperatures.size(); i++) {
            int temp = temperatures[i];
            int prev = temperatures[indicies.top()];

            if (temp > prev) {
                while (!indicies.empty() && temp > prev) {
                    int index_to_update = indicies.top(); indicies.pop();  
                    int gap = i - index_to_update;  
                    out[index_to_update] = gap;
                    if (indicies.empty()) break;
                    prev = temperatures[indicies.top()];
                }
            }  
            indicies.push(i);
        }

        return out;
    }
};
