class Solution {
public:
    int search(vector<int>& nums, int target) {
        int N = nums.size(), l = 0, r = N - 1;

        while (l < r){
            int m = l + (r - l) / 2;

            if (nums[m] > nums[r]) l = m + 1;
            else r = m;
        }

        int k = l;

        l = 0, r = N - 1;

        while (l <= r){
            int m = l + (r - l) / 2;

            if (nums[index(m,k,N)] == target) return index(m,k,N);
            else if (nums[index(m,k,N)] > target) r = m - 1;
            else l = m + 1;
        }

        return -1;
    }

    int index(int m, int k, int N){
        return (m+k) % N;
    }
};
