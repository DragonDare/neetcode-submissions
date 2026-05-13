class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> n;
        if (nums.size() == 0) return 0;
        for (const int& i: nums) {
            n.insert(i);
        }
        int count = 1;
        for (const int& i: nums) {
            int c = 1;
            int j=i;
            while (n.count(j-1)) {
                c++;
                if (c > count) count++;
                --j;
            }
        } 
        return count;
    }
};
