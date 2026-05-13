class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0, j=0, output=0, m=0;
        vector<int> l(26,0);
        while (j<s.size()) {
            ++l[s[j]-'A'];
            m=max(m,l[s[j]-'A']);
            if ((j-i+1-m)<=k) {
                output=max(j-i+1, output);
            } else {
                --l[s[i]-'A'];
                ++i;
            }
            ++j;
        }
        return output;
    }
};
