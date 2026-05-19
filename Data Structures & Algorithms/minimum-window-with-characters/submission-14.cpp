class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> u, x;
        int Ns = s.size(), Nt = t.size(), m = INT_MAX;

        if (Ns < Nt) return "";

        for (auto const& i: t) ++u[i];

        int l = 0, r = 0, have = 0, need = u.size(), start = 0, length = 0;

        while (r < Ns){
            ++x[s[r]];

            if (u.count(s[r]) && u[s[r]] == x[s[r]]) ++have;

            while (have == need){
                int k = r - l + 1;
                if (k < m){
                    m = k;
                    start = l, length = k;
                }

                --x[s[l]];
                if (u.count(s[l]) && x[s[l]] < u[s[l]]) --have;
                ++l;
            }

            ++r;
        }

        return s.substr(start, length);
    }
};
