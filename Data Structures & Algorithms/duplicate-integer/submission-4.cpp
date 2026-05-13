class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int N=nums.size();
        unordered_map<int,int> u;

        for (int i=0; i<N; ++i) {
            if (u.count(nums[i])) return true;
            ++u[nums[i]];
        }

        return false;
    }
};