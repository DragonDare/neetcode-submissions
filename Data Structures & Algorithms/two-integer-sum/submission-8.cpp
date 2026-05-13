class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> u;
        int i=0, N=nums.size();

        for (i=0; i<N; ++i){
            int k=target-nums[i];
            if (!u.count(k)) u[nums[i]]=i;
            else return {u[k],i};
        }

        return {};
    }
};
