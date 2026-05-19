class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int N = nums.size();
        priority_queue<pair<int, int>> a;
        vector<int> output;

        int r = 0;

        while (r < N){
            
            a.push({nums[r], r});

            while (a.top().second <= (r - k)){
                a.pop();
            }

            if ((r + 1) >= k){
                output.push_back(a.top().first);
            }

            ++r;

            // if ((r - l) < k){
            //     a.push({nums[r], r});
            //     ++r;
            // } else{
            //     output.push_back(a.top().first);

            //     while (a.top().second <= (r - k)){
            //         a.pop();
            //     }

            //     ++l;

            // }
        }

        return output;
    }
};