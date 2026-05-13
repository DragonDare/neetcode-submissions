class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=INT_MAX, n=0;

        for (auto const& i: prices){
            m=min(m,i);
            n=max(n,i-m);
        }

        return n;
    }
};
