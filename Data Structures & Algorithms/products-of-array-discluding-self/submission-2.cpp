class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pro = 1;
        int z=0;
        vector <int> p(nums.size(), 1);
        for (int i=1; i<nums.size(); ++i) {
            p[i] = p[i-1] * nums[i-1];
        }
        for (int i=nums.size()-1; i>=0; --i) {
            p[i]*=pro;
            pro*=nums[i];
        }
        return p;
    }
};
