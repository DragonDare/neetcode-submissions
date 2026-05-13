class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<int>> square;
        for (int i=0; i<9; i++) {
            unordered_set<int> row;
            unordered_set<int> column;
            for (int j=0; j<9; j++) {
                if (row.count(board[i][j]) || column.count(board[j][i])) return false;
                else {
                    if (board[i][j] != '.') row.insert(board[i][j]);
                    if (board[j][i] != '.') column.insert(board[j][i]);
                }
                int index=(i/3)*3 + (j/3);
                if (square[index].count(board[i][j])) return false;
                else {
                    if (board[i][j] != '.') square[index].insert(board[i][j]);
                }
            }
        }
        return true;
    }
};
