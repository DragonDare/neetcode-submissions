class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0;
        int r=l+1;
        int profit=0;
        while (r<prices.size()) {
            if (prices[l]>=prices[r]) l=r;
            else profit=max(profit,prices[r]-prices[l]);
            ++r;
        }
        return profit;
    }
};