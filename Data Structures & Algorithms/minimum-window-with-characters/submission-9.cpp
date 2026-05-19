class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> u, x;
        int Ns = s.size(), Nt = t.size(), m = INT_MAX;

        string z;

        if (Ns < Nt) return "";

        for (auto const& i: t) ++u[i];

        int l = 0, r = 0, have = 0, need = u.size();

        while (r < Ns){
            ++x[s[r]];

            if (u.count(s[r]) && u[s[r]] == x[s[r]]){
                ++have;
            }

            while (have == need){
                int k = r - l + 1;
                if (k < m){
                    m = k;
                    z = s.substr(l, k);
                }

                --x[s[l]];
                if (u.count(s[l]) && x[s[l]] < u[s[l]]){
                    --have;
                }
                ++l;
            }

            ++r;
        }

        return z;


        // while (r < Ns){
        //     if (!u.count(s[r])){
        //         ++l;
        //         r = l;
        //     } else{
        //         int k = Nt;
        //         --k;
        //         while (k > 0){
        //             ++r;
        //             if (u.count(s[r])) --k;
        //         }
        //         int a = r - l + 1;
        //         if (a < m) {
        //             m = a;
        //             z = s.substr(l,a);
        //         }
        //         ++l;
        //         r = l;
        //     }
        // }

        // return z;
    }
};
