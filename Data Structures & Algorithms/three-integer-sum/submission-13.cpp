class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> output;
        sort(nums.begin(), nums.end());
        for (int j=0; j<nums.size(); ++j) {
            if (nums[j] > 0) break;
            if (j>0 && nums[j]==nums[j-1]) continue;
            int i=nums.size()-1;
            int k=j+1;
            int target=0-nums[j];
            while (k<i) {
                if ((nums[k]+nums[i])<target) {
                    ++k;
                } else if ((nums[k]+nums[i]) == target) {
                    output.push_back({nums[j],nums[k],nums[i]});
                    ++k;
                    --i;

                    while (k<i && nums[k] == nums[k-1]) ++k;
                    while (k<i && nums[i] == nums[i+1]) --i;
                } else {
                    --i;
                }
            }
        }
        return output;
    }
};
