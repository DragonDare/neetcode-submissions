class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if (nums.size() == 2) return {0,1};
        unordered_map<int,int> c;
        for (int i=0; i<nums.size(); i++) {
            if (c.count(nums[i])) return {c.find(nums[i])->second, i};
            c[target-nums[i]]=i;
        }
    }
};
