class MinStack {
public:
    stack <int> s, t;

    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);

        if (t.empty() || t.top() >= val) t.push(val);
    }
    
    void pop() {
        if (t.top() == s.top()) t.pop();
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return t.top();
    }
};
