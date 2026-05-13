class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        unordered_set<string> operators = {
            {"+"},{"-"},{"*"},{"/"}
        };
        for (const string& i: tokens) {
            if (operators.count(i)) {
                int l,m;
                l=s.top();
                s.pop();
                m=s.top();
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
