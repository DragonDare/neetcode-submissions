class Solution {
public:
    int findMin(vector<int> &nums) {
        int N = nums.size(), l = 0, r = N - 1;

        if (N == 1) return nums[0];
        else if (N == 2){
            if (nums[0] > nums[1]) return nums[1];
            else return nums[0];
        }

        while (l <= r){
            int m = (r + l + 1) / 2;

            if (m == N - 1 || m == 0) return nums[m];

            if (nums[m + 1] <= nums[m]) return nums[m + 1];
            else if (nums[m - 1] >= nums[m]) return nums[m];

            if (nums[l] > nums[m]) r = m - 1;
            else if (nums[r] < nums[m]) l = m + 1;
            else return nums[0];
        }

        return nums[0];
    }
};
