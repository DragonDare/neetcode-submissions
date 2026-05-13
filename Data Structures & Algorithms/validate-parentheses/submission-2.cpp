class Solution {
public:
    bool isValid(string s) {
        stack<char> t;
        unordered_map<char,char> brackets={
            {')', '('},
            {'}', '{'},
            {']', '['},
        };
        for (const char&i: s) {
            if (i=='(' || i=='[' || i=='{') t.push(i);
            else if (t.empty() || t.top() != brackets[i]) return false;
            else t.pop();
        }
        return t.empty();
    }
};
