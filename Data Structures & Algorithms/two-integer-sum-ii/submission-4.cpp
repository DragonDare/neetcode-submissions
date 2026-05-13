class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0, r=numbers.size()-1;

        // while (numbers[l]>target) return {};
        // while (l<r && numbers[r]>target) --r;
        while (l<r) {
            if ((numbers[l]+numbers[r])<target) ++l;
            else if ((numbers[l]+numbers[r])>target) --r;
            else return {l+1,r+1};
        }

        return{l+1,r+1};
    }
};
