class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int N=nums.size(), p=1, t=1;
        vector<int> output(N,0);

        for (int i=0; i<N; ++i) {
            output[i]=p;
            p*=nums[i];
        }

        for (int i=N-1; i>=0; --i) {
            output[i]*=t;
            t*=nums[i];
        }

        return output;
    }
};
