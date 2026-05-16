class Solution {
public:
    int trap(vector<int>& height) {
        int N = height.size(), output=0;
        vector<int> lmax(N,0), rmax(N,0);

        for (int i=1,j=N-2; i<N,j>=0; ++i,--j) {
            lmax[i]=max(lmax[i-1],height[i-1]);
            rmax[j]=max(rmax[j+1],height[j+1]);
        }

        for (int i=1; i<N; ++i) {
            int water =  min(lmax[i],rmax[i]) - height[i];
            output += water>0 ? water: 0;
        }

        return output;
    }
};
