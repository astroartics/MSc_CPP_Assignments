#include "Board.h"

using namespace std;

void Board::blockPlaces(int currRow, int currCol)
{
    for (int i = 0; i < BOARDSIZE; i++)
    {
        if (i != currCol)
            board[currRow][i] = 'X';
    }
    for (int i = 0; i < BOARDSIZE; i++)
    {
        if (i != currRow)
            board[i][currCol] = 'X';
    }

    int m = currRow;
    int n = currCol;
    while (!(m <= 0) && !(n <= 0))
    {
        board[m - 1][n - 1] = 'X';
        m--;
        n--;
    }

    n = currCol;
    int p = currRow;
    while (!(p >= BOARDSIZE - 1) && !(n <= 0))
    {
        board[p + 1][n - 1] = 'X';
        p++;
        n--;
    }

    m = currRow;
    n = currCol;
    while (!(m <= 0) && !(n >= BOARDSIZE - 1))
    {
        board[m - 1][n + 1] = 'X';
        m--;
        n++;
    }

    n = currCol;
    p = currRow;
    while (!(n >= BOARDSIZE - 1) && !(p >= BOARDSIZE - 1))
    {
        board[p + 1][n + 1] = 'X';
        p++;
        n++;
    }
}

void Board::displayBoard()
{
    for (int i = 0; i < BOARDSIZE; i++)
    {
        for (int j = 0; j < BOARDSIZE; j++)
        {
            board[i][j] == 'X' ? std::cout << "\033[31m" << board[i][j] << " \033[0m" : std::cout << board[i][j] << " ";
        }
        std::cout << std::endl;
    }
}