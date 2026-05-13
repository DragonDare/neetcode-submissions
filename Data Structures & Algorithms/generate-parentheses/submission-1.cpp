class Solution {
public:
    void backtrack(string t, int open, int close, int n, vector<string>& s) {
        if (t.size() == 2*n) {
            s.push_back(t);
            return;
        }
        if (open<n) {
            backtrack(t+"(",open+1,close,n,s);
        }
        if (close<open) {
            backtrack(t+")",open,close+1,n,s);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> s;
        string t;
        backtrack(t,0,0,n,s);
        return s;
    }
};
