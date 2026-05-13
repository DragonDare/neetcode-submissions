class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int N=nums.size(), p=1, flag=0, k=1;
        vector<int> output(N,0);

        for (auto const& i: nums) {
            p*=i;
            if (!i) ++flag;
            if (i) k*=i;
        }

        for (int i=0; i<N; ++i){
            if (flag==1 && !nums[i]) output[i]=k;
            else if (flag>1) return output;
            else output[i]=p/nums[i];
        }

        return output;
    }
};
