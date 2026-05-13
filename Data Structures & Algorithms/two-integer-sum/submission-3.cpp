class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int N=nums.size(), r;
        for (int l=0; l<N; ++l) {
            r=l+1;
            while (r<N) {
                if ((target-nums[l])==nums[r]) return {l,r};
                ++r;
            }
        }
    }
};
