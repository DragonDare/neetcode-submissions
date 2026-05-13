class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int N=nums.size();
        unordered_set<int> u;

        for (auto& i: nums) {
            if (u.count(i)) return true;
            u.insert(i);
        }

        return false;
    }
};