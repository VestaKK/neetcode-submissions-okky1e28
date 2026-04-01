class MinStack {

private:
    std::stack<int> stack;
    std::stack<int> minim;     
public:
    MinStack() {
           
    }
    
    void push(int val) {
        stack.push(val);
        minim.push(min(val, minim.empty() ? val : minim.top()));
    }
    
    void pop() {
        stack.pop();
        minim.pop();
    }
    
    int top() {
        return stack.top(); 
    }
    
    int getMin() {
        return minim.top();
    }
};
