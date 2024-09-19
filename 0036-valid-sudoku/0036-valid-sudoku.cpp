enum Type {ROW, COL, SUB};

class Solution {
private:
    int sudoku[3][10] {};
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int x=0; x<9; x++) {
            for(int y=0; y<9; y++) {
                if(board[x][y] == '.') continue;
                int n = board[x][y] - '0';

                if(isMarked(ROW, x, n)) return false;
                mark(ROW, x, n);
                
                if(isMarked(COL, y, n)) return false;
                mark(COL, y, n);

                int sub = 3 * (x / 3) + (y / 3);
                if(isMarked(SUB, sub, n)) return false;
                mark(SUB, sub, n);
            }
        }
        return true;
    }

    bool isMarked(Type type, int idx, int n) {
        return sudoku[type][idx] & (1 << n);
    }
    void mark(Type type, int idx, int n) {
        sudoku[type][idx] |= (1 << n);
    }
};
