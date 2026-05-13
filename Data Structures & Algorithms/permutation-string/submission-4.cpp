class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> l1(26,0);
        vector<int> l2(26,0);
        for (const char& i: s1) ++l1[i-'a'];
        int i=0;
        for (int j=0; j<s2.size(); ++j) {
            ++l2[s2[j]-'a'];
            if (j-i+1 > s1.size()) {
                --l2[s2[i]-'a'];
                ++i;
            }
            if (l1==l2) return true;
        }
        return false;
    }
};
