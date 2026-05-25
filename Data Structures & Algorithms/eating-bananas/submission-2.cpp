class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int N = piles.size(), k = *max_element(piles.begin(), piles.end()), l = 1, r = k, o = 0;

        while (l <= r){
            int m = (l + r + 1) / 2, t = 0;

            for (auto const &i: piles) t +=  ceil((double)i / m);

            if (t > h) l = m + 1;
            else {
                o = m;
                r = m - 1;
            }
        }

        return o;
    }
};
