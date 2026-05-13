class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for (const string& i: tokens) {
            if (i=="+" || i=="-" || i=="*" || i=="/") {
                int l=s.top();
                s.pop();
                int m=s.top();
                s.pop();
                if (i == "+") {
                    s.push(m + l);
                }
                else if (i == "-") {
                    s.push(m - l);
                }
                else if (i == "*") {
                    s.push(m * l);
                }
                else if (i == "/") {
                    s.push(m / l);
                }
            }
            else s.push(stoi(i));
        }
        return s.top();
    }
};
