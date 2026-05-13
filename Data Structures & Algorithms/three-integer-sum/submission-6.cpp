class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> output;
        set<vector<int>> n;
        sort(nums.begin(), nums.end());
        for (int j=0; j<nums.size(); ++j) {
            int i=nums.size()-1;
            int k=j+1;
            int target=0-nums[j];
            while (k<i) {
                if ((nums[k]+nums[i])<target) {
                    ++k;
                } else if ((nums[k]+nums[i]) == target) {
                    vector<int> triplet = {nums[j], nums[k], nums[i]};
                    if (!(n.count(triplet))) {
                        output.push_back({nums[j],nums[k],nums[i]});
                        n.insert(triplet);
                    }
                    ++k;
                } else {
                    --i;
                }
            }
        }
        return output;
    }
};
