class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0, r=0, N=s.size(), m=0;
        unordered_set<char> u;

        while (r<N){
            if (!u.insert(s[r]).second){
                u.erase(s[l]);
                ++l;
            } else {
                m=max(m,r-l+1);
                ++r;
            }
        }

        return m;
    }
};
