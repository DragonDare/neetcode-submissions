class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int N=nums.size();
        unordered_map<int,int> u;
        for (int i=0; i<N; ++i) {
            int k=target-nums[i];
            if (u.count(k)) return {u[k],i};
            u[nums[i]]=i;
        }
        
    }
};
