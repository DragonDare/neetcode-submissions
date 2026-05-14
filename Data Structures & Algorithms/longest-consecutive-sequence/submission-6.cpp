class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> u(nums.begin(),nums.end());
        int longest=0;

        for (int i=0; i<nums.size(); ++i){
            if (u.find(nums[i]-1) == u.end()){
                int count = 1;
                while (u.find(nums[i]+count) != u.end()) ++count;
                longest = max(count, longest);
            }
        }

        return longest;
    }
};
