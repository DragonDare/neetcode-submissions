class Solution {
public:
    int charToIndex(char c) {
        return (c >= 'a') ? c - 'a' + 26 : c - 'A';
    }

    bool isSubset(const vector<int>& need, const vector<int>& have) {
        for (int i = 0; i < need.size(); ++i) {
            if (have[i] < need[i]) return false;
        }
        return true;
    }


    string minWindow(string s, string t) {
       vector<int> freq(52, 0), freqT(52, 0);
       for (const char& c : t) ++freq[charToIndex(c)];
       int l = 0, m = INT_MAX;
       int i=0, j=0;
    //    for (int i=0; i<s.size(); ++i) {
    //         ++freqT[charToIndex(s[j])];
    //         if (freq == freqT) {
    //             m = min(m,j-i+1);
    //             --freqT[charToIndex(s[i])];
    //             ++i;
    //         }
    //         if (!freq[charToIndex(s[j])]) {
    //             ++i;
    //         }
    //         ++j;
    //    }
        while (j < s.size()) {
            ++freqT[charToIndex(s[j])];
            while (isSubset(freq, freqT)) {
                cout<<i<<j;
                if ((j-i+1) < m) {
                    l=i;
                }
                m = min(m,j-i+1);
                --freqT[charToIndex(s[i])];
                ++i;
            }
            ++j;
        }
        return m != INT_MAX ? s.substr(l, m) : "";
    }
};
