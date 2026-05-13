class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> c;
        map<int,vector<int>> d;
        for (int i: nums) {
            c[i]++;
        }
        for (auto v: c) {
            d[v.second].push_back(v.first);
        }
        vector<int> res;
        for (auto it=d.rbegin(); it != d.rend(); ++it) {
            for (int d: it->second) {
                res.push_back(d);
                if (res.size() == k) {
                    return res;
                }
            }
        }
        return res;
    }
};
