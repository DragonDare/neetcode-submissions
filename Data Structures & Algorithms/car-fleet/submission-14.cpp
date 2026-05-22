class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> a;
        int N = position.size();

        for (int i = 0; i < N; ++i) a.push_back({position[i], speed[i]});
        sort(a.rbegin(), a.rend());

        stack<float> s;

        for (int i = 0; i < N; ++i){
            float time = (float)(target - a[i].first) / a[i].second;

            if (s.empty() || time > s.top()) s.push(time);
        }

        return s.size();
    }
};
