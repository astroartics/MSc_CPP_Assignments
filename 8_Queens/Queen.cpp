#include "Queen.h"

using namespace std;

bool Queen::isUnderAttack(int r, int c)
{
    // Checking current column and row
    for (int i = 0; i < BOARDSIZE; i++)
    {
        if (b.board[i][c] == 'Q')
            return true;
        if (b.board[r][i] == 'Q')
            return true;
    }

    // Left upper diagonal
    for (int i = r, j = c; i >= 0 && j >= 0; i--, j--)
    {
        if (b.board[i][j] == 'Q')
            return true;
    }

    // Right upper diagonals
    for (int i = r, j = c; i >= 0 && j < BOARDSIZE; i--, j++)
    {
        if (b.board[i][j] == 'Q')
            return true;
    }

    return false;
}

bool Queen::placeQueens(int row)
{
    if (queensPlaced == BOARDSIZE)
    {
        b.displayBoard();
        return true;
    }

    for (int col = 0; col < BOARDSIZE; col++)
    {
        if (!isUnderAttack(row, col))
        {
            b.board[row][col] = 'Q';
            queensPlaced++;

            if (placeQueens(row + 1))
            {
                return true;
            }

            queensPlaced--;
            b.board[row][col] = '-';
        }
    }

    return false;
}