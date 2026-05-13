class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for (int i=0; i<s.size(); i++) {
            if (('A' <= s[i] && s[i] <= 'Z') || ('a' <= s[i] && s[i] <= 'z') || ('0' <= s[i] && s[i] <= '9')) t.push_back(s[i]);
        }
        int j=0;
        int k=t.size()-1;
        while (j < k) {
            if (tolower(t[j]) == tolower(t[k])) {
                ++j;
                --k;
            } else return false;
        }
        return true;
    }
};
