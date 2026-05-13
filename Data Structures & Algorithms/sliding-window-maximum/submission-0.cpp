class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        for (int i=0; i<nums.size()-k+1; ++i) {
            int j=i+1;
            int m=nums[i];
            while (j<i+k) {
                m=max(m,nums[j]);
                ++j;
            }
            res.push_back(m);
        }
        return res;
    }
};
