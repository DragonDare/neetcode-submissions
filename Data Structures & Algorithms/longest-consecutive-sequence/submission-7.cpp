class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> u(nums.begin(),nums.end());
        int longest=0;

        for (auto const& i: u){
            if (u.find(i-1) == u.end()){
                int count = 1;
                while (u.find(i+count) != u.end()) ++count;
                longest = max(count, longest);
            }
        }

        return longest;
    }
};
