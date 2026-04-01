class Solution {
public:
    bool isValid(string s) {
        stack<char> paren;

        for (char c : s) {
            if (c == '[' || c == '(' || c == '{') {
                paren.push(c);
                continue;
            }

            if (paren.size() == 0)
                return false;

            if (c == ']' && paren.top() != '[') 
                return false;
                
            if (c == ')' && paren.top() != '(') 
                return false;

            if (c == '}' && paren.top() != '{') 
                return false; 

            paren.pop();
        }

        return paren.size() == 0;
    }
};
