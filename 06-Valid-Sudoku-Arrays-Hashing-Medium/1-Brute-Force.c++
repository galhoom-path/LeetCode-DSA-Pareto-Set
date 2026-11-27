/*
    Problem: Valid Sudoku
    Link:    https://leetcode.com/problems/valid-sudoku/

    Approach: Brute Force (re-scan row, column and box for every filled cell)

    Idea:
    For each filled cell, look at every other cell in the same row, the same column and the same
    3×3 box. If any of them holds the same digit, the board is invalid.

    Steps (example: two '8's in column 0):
    1. For each cell (r, c) that is not '.'
    2. Scan row r       — another column k with board[r][k] == digit → invalid
    3. Scan column c    — another row k with board[k][c] == digit → invalid
    4. Scan its 3×3 box — another cell with the same digit → invalid
    5. If no cell finds a repeat → valid

    Time Complexity:  O(n³) for an n×n board — each of n² cells scans 3n others
                      (the real board is always 9×9, so this is a fixed ~6,000 checks)
    Space Complexity: O(1)  — no extra structures

    Edge Cases:
    - empty board (all '.')             → valid
    - repeat in a row / column / box    → invalid
    - board that is valid but unsolvable → still valid (only filled cells are checked)

    Example: the LeetCode example board → true; same board with board[0][0] = '8' → false

    Note: Honest baseline — it repeats the same comparisons many times.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                char digit = board[r][c];
                if (digit == '.') {
                    continue;
                }
                for (int k = 0; k < 9; k++) {
                    if (k != c && board[r][k] == digit) {
                        return false;  // same row
                    }
                    if (k != r && board[k][c] == digit) {
                        return false;  // same column
                    }
                }
                int boxRow = (r / 3) * 3, boxCol = (c / 3) * 3;
                for (int i = boxRow; i < boxRow + 3; i++) {
                    for (int j = boxCol; j < boxCol + 3; j++) {
                        if ((i != r || j != c) && board[i][j] == digit) {
                            return false;  // same box
                        }
                    }
                }
            }
        }
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
