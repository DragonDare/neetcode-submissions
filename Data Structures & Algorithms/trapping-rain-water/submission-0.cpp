class Solution {
public:
    int trap(vector<int>& height) {
        int water=0;
        int i=0;
        int j=height.size()-1;
        int lmax=height[i];
        int rmax=height[j];
        while (i<j) {
            if (lmax<=rmax) {
                ++i;
                int k=lmax-height[i];
                if (k<0) k=0;
                water+= k;
                lmax=max(lmax,height[i]);
            } else {
                --j;
                int k=rmax-height[j];
                if (k<0) k=0;
                water+=k;
                rmax=max(rmax,height[j]);
            }
        }
        return water;
    }
};
