class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;

        while (l < r) {
            int m = l + (r - l) / 2;

            if (nums[m] > nums[r]) {
                // Minimum is in the right unsorted inflection zone
                l = m + 1;
            } else {
                // m could be the minimum, or it's to the left
                r = m;
            }
        }

        return nums[l]; // l and r have converged to the minimum
    }
};