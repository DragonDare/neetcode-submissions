class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int N = heights.size();
        stack<int> s;
        int m = 0;
        vector<int> left(N,-1), right(N,N);

        for (int i = 0; i < N; ++i){
            while (!s.empty() && heights[s.top()] >= heights[i]) s.pop();

            if (!s.empty()) left[i] = s.top();

            s.push(i);
        }

        while (!s.empty()) s.pop();

        for (int i = N-1; i >= 0; --i){
            while (!s.empty() && heights[s.top()] >= heights[i]) s.pop();

            if (!s.empty()) right[i] = s.top();

            s.push(i);
        }
        
        for (int i = 0; i < N; ++i) m = max(m,heights[i] * ((right[i] - 1) - (left[i] + 1) + 1));

        return m;

    }
};
