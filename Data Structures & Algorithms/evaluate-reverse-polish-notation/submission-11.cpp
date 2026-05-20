class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        int l,k;
        for (auto const& i: tokens){
            if ((i == "+") || (i == "-") || (i == "*") || (i == "/")){
                k = s.top();
                s.pop();
                l = s.top();
                s.pop();

                if (i == "+") s.push(l + k);
                else if (i == "-") s.push(l - k);
                else if (i == "*") s.push(l * k);
                else if (i == "/") s.push(l / k);
            } else s.push(stoi(i));

        }

        return s.top();
    }
};
