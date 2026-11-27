/*
    Problem: Valid Sudoku
    Link:    https://leetcode.com/problems/valid-sudoku/

    Approach: Optimal (single pass with bitmasks per row, column and box)

    Idea:
    Give every row, column and box a 9-bit mask: bit d is set when digit d+1 has been seen there.
    Visit each cell once; if its bit is already set in its row, column or box mask → repeat.
    Same O(n²) as the three-pass version, but one pass, no hashing, and only 27 ints of state.

    Steps (example cell (4, 3) holding '8'):
    1. rows[9] = cols[9] = boxes[9] = 0
    2. For each filled cell (r, c): bit = 1 << (digit - '1'); box = (r/3)*3 + c/3
    3. If rows[r] & bit, or cols[c] & bit, or boxes[box] & bit → return false
    4. Else set the bit in all three masks
    5. After all cells → return true

    Time Complexity:  O(n²) for an n×n board — each cell once, O(1) bit ops (fixed 81 cells here)
    Space Complexity: O(n)  — 3n masks (27 ints for 9×9)

    Edge Cases:
    - empty board                         → no bits set → true
    - repeat in a box only (row/col fine) → boxes[box] catches it
    - digit '9'                           → bit 1 << 8 still fits in an int

    Example: the LeetCode example board → true

    Note: box = (r/3)*3 + c/3 numbers the boxes 0…8 left-to-right, top-to-bottom.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows[9] = {0}, cols[9] = {0}, boxes[9] = {0};

        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                if (board[r][c] == '.') {
                    continue;
                }
                int bit = 1 << (board[r][c] - '1');
                int box = (r / 3) * 3 + c / 3;
                if ((rows[r] & bit) || (cols[c] & bit) || (boxes[box] & bit)) {
                    return false;
                }
                rows[r] |= bit;
                cols[c] |= bit;
                boxes[box] |= bit;
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
