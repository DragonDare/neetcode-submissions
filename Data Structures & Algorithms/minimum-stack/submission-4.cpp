class MinStack {
public:
    stack<int> ts;
    stack<int> ms;

    void push(int val) {
        ts.push(val);
        if (ms.empty() || val <= ms.top()) {
            ms.push(val);
        }
    }
    
    void pop() {
        if (ts.top() == ms.top()) {
            ms.pop();
        }
        ts.pop();
    }
    
    int top() {
        return ts.top();
    }
    
    int getMin() {
        return ms.top();
    }
};
