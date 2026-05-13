class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> occurs;
        for (int i=0; i<nums.size(); i++){
            if (occurs.find(nums[i]) == occurs.end()) {
                occurs[nums[i]] = 1;
            }
            else {
                return true;
            }
        }
        return false;
    }
};