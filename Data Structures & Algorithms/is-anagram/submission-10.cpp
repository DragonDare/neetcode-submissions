class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> m(26,0);
        for (auto const& i: s) ++m[i-'a'];
        for (auto const& i: t) if (i != 0) --m[i-'a'];
        for (auto const& i: m) if (i != 0) return false;
        return true;
    }
};
