class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> a1(26,0), a2(26,0);

        int N1 = s1.size(), N2 = s2.size();

        if (N1 > N2) return false;

        for (auto const& i: s1) ++a1[i - 'a'];

        int l = 0, r = 0;

        while (r < N2){
            if ((r - l + 1) > N1){
                --a2[s2[l] - 'a'];
                ++l;
            }

            ++a2[s2[r] - 'a'];
            ++r;
            
            if (a1 == a2) return true;
        }

        return false;

    }
};
