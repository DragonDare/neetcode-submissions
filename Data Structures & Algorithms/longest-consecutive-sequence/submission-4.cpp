class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> n(nums.begin(), nums.end());
        if (nums.size() == 0) return 0;
        int count = 1;
        for (const int& i: nums) {
            if (!n.count(i-1)) {
                int c = 1;
                int j=i;
                while (n.count(j+1)) {
                    ++c;
                    if (c > count) count=c;
                    ++j;
                }
            }
        } 
        return count;
    }
};
