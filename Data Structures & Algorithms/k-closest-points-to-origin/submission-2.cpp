class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>, greater<pair<int, vector<int>>>> pq;

        vector<vector<int>> output;

        for (auto const& i: points) pq.emplace(i[0] * i[0] + i[1] * i[1], i);

        while (k) {
            output.push_back(pq.top().second);
            pq.pop();
            --k;
        }

        return output;
    }
};
