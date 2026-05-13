class Solution {
public:
    int maxArea(vector<int>& heights) {
        int N=heights.size(), l=0, r=N-1, m=0;

        while (l<r){
            m=max(m,min(heights[l],heights[r])*(r-l));
            if (heights[l]<heights[r]) ++l;
            else --r;
        }

        return m;
    }
};
