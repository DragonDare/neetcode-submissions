class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int N=nums.size(), l=0;
        for (l=0; l<N; ++l) {
            int r=l+1;
            while (r<N) {
                if ((target-nums[l])==nums[r]) return {l,r};
                ++r;
            }
        }
    }
};
