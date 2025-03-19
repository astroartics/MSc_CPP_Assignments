#include <bits/stdc++.h>
#define BOARDSIZE 8

class Board
{
public:
    char board[BOARDSIZE][BOARDSIZE];

    Board()
    {
        for (int i = 0; i < BOARDSIZE; i++)
        {
            for (int j = 0; j < BOARDSIZE; j++)
            {
                board[i][j] = '-';
            }
        }
    }

    void displayBoard();
};