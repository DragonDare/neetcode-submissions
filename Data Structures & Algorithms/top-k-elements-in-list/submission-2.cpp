class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int N=nums.size();
        unordered_map<int,int> u;
        vector<vector<int>> c(N+1);
        vector<int> output;

        for (auto const& i: nums) ++u[i];

        for (auto const& i: u) {
            c[i.second].push_back(i.first);
        }

        for (int i=N; i>=0; --i) {
            if (k){
                for (auto const& j: c[i]) {
                    output.push_back(j);
                    --k;
                }
            }
        }

        return output;

    }
};
