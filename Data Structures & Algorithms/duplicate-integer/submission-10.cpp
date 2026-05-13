class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int N=nums.size();
        unordered_set<int> u;

        for (auto const& i: nums) if (!u.insert(i).second) return true;

        return false;
    }
};