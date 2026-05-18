class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> a(26,0);

        int N = s.size(), l = 0, r = 0, m = 0, o = 0;

        while (r < N){
            ++a[s[r] - 'A'];

            m = max(m,a[s[r] - 'A']);

            while (((r - l + 1) - m) > k){
                --a[s[l] - 'A'];
                ++l;
            }

            o = max(o, r - l + 1);

            ++r;
        }

        return o;
    }
};
