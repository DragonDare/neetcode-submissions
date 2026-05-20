class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for (auto const& i: tokens){
            if (i == "+"){
                int k = s.top();
                s.pop();
                int l = s.top();
                s.pop();
                s.push(l + k);
            } else if (i == "-"){
                int k = s.top();
                s.pop();
                int l = s.top();
                s.pop();
                s.push(l - k);
            } else if (i == "*"){
                int k = s.top();
                s.pop();
                int l = s.top();
                s.pop();
                s.push(l * k);
            } else if (i == "/"){
                int k = s.top();
                s.pop();
                int l = s.top();
                s.pop();
                s.push(l / k);
            } else s.push(stoi(i));
        }

        return s.top();
    }
};
