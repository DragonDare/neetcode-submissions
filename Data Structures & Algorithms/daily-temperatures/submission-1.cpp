class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> s;
        int N = temperatures.size();
        vector<int> o(N,0);

        for (int i = 0; i < N; ++i){
            while (!s.empty() && temperatures[i] > temperatures[s.top()]){
                o[s.top()] = i - s.top();
                s.pop();
            }
            s.push(i);
        }

        return o;
    }
};
