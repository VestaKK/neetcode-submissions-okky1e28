class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        map<string, int (*)(int, int)> operands = { 
            {"+", [](int x, int y) { return x + y;}},  
            {"-", [](int x, int y) { return x - y;}},  
            {"*", [](int x, int y) { return x * y;}},  
            {"/", [](int x, int y) { return x / y;}}
        };

        stack<int> stuff;
        for (string tok : tokens) {
            if (operands.count(tok)) {
                auto op = operands[tok];
                int second = stuff.top(); stuff.pop();
                int first = stuff.top(); stuff.pop();
                int result = op(first, second);
                stuff.push(result);
            } else {
                stuff.push(stoi(tok));
            }
        }
        return stuff.top();
        return 0;
    }
};
