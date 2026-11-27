/*
    Problem: Valid Sudoku
    Link:    https://leetcode.com/problems/valid-sudoku/

    Approach: Optimized (three passes with a hash set: rows, then columns, then boxes)

    Idea:
    A unit (row, column or 3×3 box) is valid when no digit appears twice in it. Check each kind of
    unit in its own pass, using a fresh unordered_set per unit to spot a repeat in one look.

    Steps (example: two '8's in column 0):
    1. For each row r: seen = {}; for each filled cell, repeat in seen → invalid, else insert
    2. For each column c: same idea down the column
    3. For each box b (0…8): same idea over its 9 cells
       box b covers rows (b/3)*3 … +2 and columns (b%3)*3 … +2
    4. All 27 units pass → valid

    Time Complexity:  O(n²) for an n×n board — every cell is visited 3 times, set ops O(1) average
    Space Complexity: O(n)  — one set of at most n digits at a time

    Edge Cases:
    - empty board            → valid
    - repeat only inside a box (row and column fine) → caught by pass 3
    - '.' cells              → skipped in every pass

    Example: the LeetCode example board → true

    Note: Three separate passes are easy to reason about; the optimal version merges them.
*/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int r = 0; r < 9; r++) {
            unordered_set<char> seen;
            for (int c = 0; c < 9; c++) {
                if (!addDigit(seen, board[r][c])) {
                    return false;
                }
            }
        }
        for (int c = 0; c < 9; c++) {
            unordered_set<char> seen;
            for (int r = 0; r < 9; r++) {
                if (!addDigit(seen, board[r][c])) {
                    return false;
                }
            }
        }
        for (int b = 0; b < 9; b++) {
            unordered_set<char> seen;
            int boxRow = (b / 3) * 3, boxCol = (b % 3) * 3;
            for (int i = boxRow; i < boxRow + 3; i++) {
                for (int j = boxCol; j < boxCol + 3; j++) {
                    if (!addDigit(seen, board[i][j])) {
                        return false;
                    }
                }
            }
        }
        return true;
    }

private:
    // Returns false when `cell` is a digit already in `seen`.
    bool addDigit(unordered_set<char>& seen, char cell) {
        if (cell == '.') {
            return true;
        }
        if (seen.count(cell)) {
            return false;
        }
        seen.insert(cell);
        return true;
    }
};

int main() {
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
    Solution solution;
    bool result = solution.isValidSudoku(board);
    cout << (result ? "true" : "false") << endl;
    return 0;
}
