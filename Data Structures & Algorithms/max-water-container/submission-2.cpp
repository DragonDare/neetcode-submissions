class Solution {
public:
    int maxArea(vector<int>& heights) {
        int N=heights.size(), l=0, r=N-1, m=0;

        while (l<r){
            if (heights[l]<heights[r]){
                m=max(m,heights[l]*(r-l));
                ++l;
            } else {
                m=max(m,heights[r]*(r-l));
                --r;
            }
        }

        return m;
    }
};
