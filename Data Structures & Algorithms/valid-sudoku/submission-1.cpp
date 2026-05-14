class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,unordered_set<char>> r,c,s;

        for (int i=0; i<9; ++i) for (int j=0; j<9; ++j) if (board[i][j] != '.') if (!s[(i/3)*3 + (j/3)].insert(board[i][j]).second || !r[i].insert(board[i][j]).second || !c[j].insert(board[i][j]).second) return false;
        
        return true;
    }
};
