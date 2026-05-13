class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pro = 1;
        int z=0;
        vector <int> p(nums.size());
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] == 0) {
                z++;
                if (z > 1) return p;
            } else {
                pro*=nums[i];
            }
        }
        for (int i=0; i<nums.size(); i++) {
            if (z > 0) {
                if (nums[i] != 0) {
                    p[i]=0;
                } else {
                    p[i] = pro;
                }
            } else {
                p[i] = pro / nums[i];
            }
        }
        return p;
    }
};
