// https://leetcode.com/problems/n-queens/description/

class Solution {
public:
    vector<vector<string>> result;

    bool isSafe(vector<vector<char>>& board, int row, int col){
        int n = board.size();

        for(int j = 0; j < n; j++){ // horizontal check
            if(board[row][j] == 'Q') return false;
        }
        
        for(int i = 0; i < n; i++){ // vertical check
            if(board[i][col] == 'Q') return false;
        }
        
        for(int i = row, j = col; i >= 0 && j >= 0; i--, j--){ // diagonal left
            if(board[i][j] == 'Q') return false;
        }
        
        for(int i = row, j = col; i >= 0 && j < n; i--, j++){ // diagonal right
            if(board[i][j] == 'Q') return false;
        }
        return true;
    }

    void nQueens(vector<vector<char>>& board, int row){
        int n = board.size();

        if(row == n){
            vector<string> temp;
            for(int i = 0; i < n; i++){
                string s(board[i].begin(), board[i].end());
                temp.push_back(s);
            }
            result.push_back(temp);
            return;
        }

        for(int col = 0; col < n; col++){ // columns
            if(isSafe(board, row, col)){ // j = column
                board[row][col] = 'Q';
                nQueens(board, row + 1);
                board[row][col] = '.';
            } 
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<char>> board;

        for(int i = 0; i < n; i++){
            vector<char> newRow;
            for(int j = 0; j < n; j++){
                newRow.push_back('.');
            }
            board.push_back(newRow);
        }
        nQueens(board, 0);
        return result;
    }
};