class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int N = nums.size();
        vector<vector<int>> output;

        sort(nums.begin(), nums.end());

        for (int i=0; i<N; ++i){
            int l = i+1, r = N-1;

            if (i != 0 && nums[i] == nums[i-1]) continue;

            while (l < r){
                int sum = nums[i] + nums[l] + nums[r];

                if (sum == 0) {
                    output.push_back({nums[i], nums[l], nums[r]});

                    ++l;
                    --r;

                    while (l < r && nums[l] == nums [l-1]) ++l;
                    while (l < r && r != N-1 && nums[r] == nums [r+1]) --r;
                }
                else if (sum > 0) --r;
                else ++l;
            }
        }
        return output;
    }
};
