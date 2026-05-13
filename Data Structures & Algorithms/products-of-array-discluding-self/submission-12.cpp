class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int N = nums.size();
        vector<int> prefix(N,1);
        vector<int> suffix(N,1);
        vector<int> output(N,1);
        prefix[0]=nums[0];
        suffix[N-1]=nums[N-1];
        
        for (int i=1; i<N; ++i) prefix[i]=nums[i]*prefix[i-1];

        for (int i=N-2; i>=0; --i) suffix[i]=nums[i]*suffix[i+1];

        output[0]=suffix[1];
        output[N-1]=prefix[N-2];

        for (int i=1; i<N-1; ++i) output[i]=prefix[i-1]*suffix[i+1];

        return output;
    }
};
