class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int M = matrix.size(), N = matrix[0].size();

        for (int i = 0; i < M; ++i){
            int l = 0, r = N - 1;
            if (matrix[i][r] == target) return true;
            else if (matrix[i][r] > target) {
                while (l <= r){
                    int m = (l + r + 1) / 2;
                    if (matrix[i][m] == target) return true;
                    else if (matrix[i][m] > target) r = m - 1;
                    else l = m + 1;
                }
            }
        }

        return false;
    }
};
                                                                                                                                                                                                              