class Solution {
public:
    bool isPalindrome(string s) {
        int j=0;
        int k=s.size()-1;
        while (j < k) {
            while (j<k && !(('A' <= s[j] && s[j] <= 'Z') || ('a' <= s[j] && s[j] <= 'z') || ('0' <= s[j] && s[j] <= '9'))) ++j;
            while (j<k && !(('A' <= s[k] && s[k] <= 'Z') || ('a' <= s[k] && s[k] <= 'z') || ('0' <= s[k] && s[k] <= '9'))) --k;
            if (tolower(s[j]) == tolower(s[k])) {
                ++j;
                --k;
            } else return false;
        }
        return true;
    }
};
