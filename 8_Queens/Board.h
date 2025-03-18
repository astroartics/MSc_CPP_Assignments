#include <bits/stdc++.h>
#define BOARDSIZE 8

class Board
{
public:
    char board[BOARDSIZE][BOARDSIZE];

    Board(int initialRow, int initialCol)
    {
        for (int i = 0; i < BOARDSIZE; i++)
        {
            for (int j = 0; j < BOARDSIZE; j++)
            {
                board[i][j] = '-';
            }
        }

        board[initialRow][initialCol] = 'Q';

        for (int i = 0; i < BOARDSIZE; i++)
        {
            if (i != initialCol)
                board[initialRow][i] = 'X';
        }
        for (int i = 0; i < BOARDSIZE; i++)
        {
            if (i != initialRow)
                board[i][initialCol] = 'X';
        }

        int m = initialRow;
        int n = initialCol;
        while (!(m <= 0) && !(n <= 0))
        {
            board[m - 1][n - 1] = 'X';
            m--;
            n--;
        }

        n = initialCol;
        int p = initialRow;
        while (!(p >= BOARDSIZE - 1) && !(n <= 0))
        {
            board[p + 1][n - 1] = 'X';
            p++;
            n--;
        }

        m = initialRow;
        n = initialCol;
        while (!(m <= 0) && !(n >= BOARDSIZE - 1))
        {
            board[m - 1][n + 1] = 'X';
            m--;
            n++;
        }

        n = initialCol;
        p = initialRow;
        while (!(n >= BOARDSIZE - 1) && !(p >= BOARDSIZE - 1))
        {
            board[p + 1][n + 1] = 'X';
            p++;
            n++;
        }

        for (int i = 0; i < BOARDSIZE; i++)
        {
            for (int j = 0; j < BOARDSIZE; j++)
            {
                board[i][j] == 'X' ? std::cout << "\033[31m" << board[i][j] << " \033[0m" : std::cout << board[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};