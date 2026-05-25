class Solution {
public:
    int search(vector<int>& nums, int target) {
        int N = nums.size(), l = 0, r = N - 1;

        while (l <= r){
            int m = (r + l + 1) / 2;
            if (nums[m] == target) return m;
            else if (nums[m] > target) r = m - 1;
            else l = m + 1;
        }

        return -1;
    }
};
