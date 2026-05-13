class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // int N=nums.size(), p=1, flag=0, k=1;
        // vector<int> output(N,0);

        // for (auto const& i: nums) {
        //     p*=i;
        //     if (!i) ++flag;
        //     if (i) k*=i;
        // }

        // for (int i=0; i<N; ++i){
        //     if (flag==1 && !nums[i]) output[i]=k;
        //     else if (flag>1) return output;
        //     else output[i]=p/nums[i];
        // }

        // return output;

        int N=nums.size(), p=1, t=1;
        vector<int> l(N,1), r(N,1), output(N,0);

        for (int i=0; i<N; ++i) {
            p*=nums[i];
            l[i]=p;
        }

        for (int i=N-1; i>=0; --i) {
            t*=nums[i];
            r[i]=t;
        }

        for (int i=0; i<N; ++i) {
            if (i==0) output[i]=r[i+1];
            else if (i==N-1) output[i]=l[i-1];
            else output[i]=l[i-1]*r[i+1];
        }

        return output;
    }
};
