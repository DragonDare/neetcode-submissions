class Solution {
public:
    int trap(vector<int>& height) {
        int N=height.size(), m=0, n=0, k=0;
        vector<int> maxl(N,0), maxr(N,0);

        if (N == 0) return 0;

        maxl[0]=-1;
        maxr[N-1]=-1;

        for (int i=1, j=N-2; i<N, j>=0; ++i, --j){
            m=max(m,height[i-1]);
            maxl[i]=m;
            n=max(n,height[j+1]);
            maxr[j]=n;
        }

        for (int i=1; i<N; ++i){
            int t=min(maxl[i],maxr[i]);
            if (height[i]<t) k+=t-height[i];
        }

        return k;
    }
};
