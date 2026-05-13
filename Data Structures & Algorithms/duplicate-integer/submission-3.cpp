class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> occurs;
        for (int i: nums){
            if (occurs.count(i)) {
                return true;
            }
            else {
                occurs.insert(i);
            }
        }
        return false;
    }
};