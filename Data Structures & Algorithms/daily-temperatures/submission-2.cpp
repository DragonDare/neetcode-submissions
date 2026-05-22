class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int N = temperatures.size();
        vector<int> output(N,0);
        stack<int> s;

        for (int i = 0; i < N; ++i){
            while (!s.empty() && temperatures[i] > temperatures[s.top()]){
                output[s.top()] = i - s.top();
                s.pop();
            }

            s.push(i);
        }

        return output;
    }
};
