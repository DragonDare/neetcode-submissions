class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int N=nums.size();
        vector<vector<int>> output;
        sort(nums.begin(), nums.end());
        
        for (int i=0; i<N; ++i){
            int l=i+1, r=N-1, k=-nums[i];
            if (i>0 && nums[i]==nums[i-1]) continue;
            while (l<r){
                int sum=nums[l]+nums[r];
                if (sum>k) --r;
                else if (sum<k) ++l;
                else {
                    output.push_back({nums[i], nums[l], nums[r]});
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
