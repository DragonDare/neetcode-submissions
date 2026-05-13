class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> n(nums.begin(), nums.end());
        int count = 0;
        for (const int& i: n) {
            if (!n.count(i-1)) {
                int c = 1;
                int j = i;
                while (n.count(j+1)) {
                    ++c;
                    ++j;
                }
                count = max(count, c);
            }
        } 
        return count;
    }
};
