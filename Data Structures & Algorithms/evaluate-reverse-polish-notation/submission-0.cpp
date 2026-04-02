
enum class operand {
    add,
    sub,
    mul,
    div,
};

int perform_op(operand op, int x, int y) {
    int res = -100;
    switch (op) {
        case operand::add:
            res = x + y;
            break;
        case operand::sub:
            res = x - y;
            break; 
        case operand::mul:
            res = x * y;
            break;
        case operand::div:
            res = x / y;
            break; 
    }
    return res;
}

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        map<string, operand> operands = { 
            {"+", operand::add},  
            {"-", operand::sub},  
            {"*", operand::mul},  
            {"/", operand::div},  
        };

        stack<int> stuff;

        for (string tok : tokens) {
            if (operands.count(tok)) {
                operand op = operands[tok];
                int second = stuff.top(); stuff.pop();
                int first = stuff.top(); stuff.pop();
                int result = perform_op(op, first, second);
                stuff.push(result);
            } else {
                stuff.push(stoi(tok));
            }
        }

        return stuff.top();
    }
};
