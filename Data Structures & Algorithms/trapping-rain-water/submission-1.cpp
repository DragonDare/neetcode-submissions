class Solution {
public:
    int trap(vector<int>& height) {
        int N=height.size(), m=0, k=0;
        vector<int> maxl(N,0), maxr(N,0);

        maxl[0]=-1;
        maxr[N-1]=-1;

        for (int i=1; i<N; ++i){
            m=max(m,height[i-1]);
            maxl[i]=m;
        }

        m=0;

        for (int i=N-2; i>=0; --i){
            m=max(m,height[i+1]);
            maxr[i]=m;
        }

        for (int i=1; i<N; ++i){
            int t=min(maxl[i],maxr[i]);
            if (height[i]<t) k+=t-height[i];
        }

        return k;
    }
};
