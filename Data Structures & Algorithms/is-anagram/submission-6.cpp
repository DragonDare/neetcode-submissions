class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> u;
        int M=s.size(), N=t.size();
        
        for (int i=0; i<M; ++i) ++u[s[i]];

        for (int i=0; i<N; ++i) {
            if (!u.count(t[i])) return false;
            --u[t[i]];
        }

        for (auto const& pair: u) if (pair.second) return false;

        return true;
    }
};
