

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        std::map<int, set<char>> rows, cols = {};
        std::map<std::pair<int, int>, set<char>> boxs = {};

        for  (int r = 0; r < 9; r++) {
           for (int c = 0; c < 9; c++) {
                if (board[r][c] == '.') {
                    continue;
                }

                auto box_coord = std::pair<int, int>{r/3, c/3};

                if (
                    rows[r].count(board[r][c]) || 
                    cols[c].count(board[r][c]) ||
                    boxs[box_coord].count(board[r][c])) 
                    {
                        return false;
                    }                    

                rows[r].insert(board[r][c]);
                cols[c].insert(board[r][c]);
                boxs[box_coord].insert(board[r][c]);
           }
        } 
        

        return true;
    }
};
