class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> d;
        int i=0, j=0, count=0;
        while (j<s.size()) {
            if (!(d.count(s[j]))) {
                d.insert(s[j]);
                ++j;
            } else {
                count=max(count,j-i);
                d.erase(s[i]);
                ++i;
            }
        }
        return max(count,j-i);
    }
};
