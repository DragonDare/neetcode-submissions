class Solution {
public:
    bool isValid(string s) {
        stack<char> ss;

        for (auto const& i: s){
            if (i == '(' || i == '[' || i == '{'){
                ss.push(i);
            } else {
                if (ss.empty()) return false;
                if (i == ')'){
                    if (ss.top() != '(') return false;
                    else ss.pop();
                }
                if (i == ']'){
                    if (ss.top() != '[') return false;
                    else ss.pop();
                }
                if (i == '}'){
                    if (ss.top() != '{') return false;
                    else ss.pop();
                }
            }
        }

        if (ss.empty()) return true;
        else return false;
    }
};
