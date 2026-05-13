class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> c;
        vector<vector<int>> d(nums.size()+1);
        for (int i: nums) {
            c[i]++;
        }
        for (auto v: c) {
            d[v.second].push_back(v.first);
        }
        vector<int> res;
        for (int i=d.size() - 1; i>-1; --i) {
            for (int n: d[i]) {
                res.push_back(n);
                if (res.size() == k) {
                    return res;
                }
            }
        }
        return res;
    }
};
