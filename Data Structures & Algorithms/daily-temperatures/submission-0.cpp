class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> s;
        int N = temperatures.size();
        vector<int> o(N,0);

        for (int i = 0; i < N; ++i){
            while (!s.empty() && temperatures[i] > s.top().first){
                o[s.top().second] = i - s.top().second;
                s.pop();
            }
            s.push({temperatures[i], i});
        }

        return o;
    }
};
