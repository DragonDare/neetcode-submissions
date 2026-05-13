class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int N=nums.size(), l=1, r=N-1;
        vector<vector<int>> output;

        sort(nums.begin(),nums.end());

        for (int i=0; i<N; ++i){
            if (i>0 && nums[i]==nums[i-1]) continue;
            l=i+1;
            r=N-1;
            while (l<r){
                int k=nums[i]+nums[l]+nums[r];
                if (k<0) ++l;
                else if (k>0) --r;
                else {
                    output.push_back({nums[i],nums[l],nums[r]});
                    ++l;
                    --r;
                    while (l<r && nums[l]==nums[l-1]) ++l;
                    while (l<r && nums[r]==nums[r+1]) --r;
                }
            }
        }

        return output;
    }
};
