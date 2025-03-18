#include "Board.h"
#include "Queen.h"
#ifndef __Board_h_

using namespace std;

void Queen::placeQueen(int initialRow, int initialCol)
{
    Board b;
    b.board[initialRow][initialCol] = 'Q';
    b.blockPlaces(initialRow, initialCol);
    queensPlaced = 1;
    int flag = 0, i = 0, j = 0;

    while (!flag || !(queensPlaced == BOARDSIZE))
    {
        flag = 0, i = 0, j = 0;

        for (i = 0; i < BOARDSIZE; i++)
        {
            for (j = 0; j < BOARDSIZE; j++)
            {
                if (b.board[i][j] == '-')
                {
                    b.board[i][j] = 'Q';
                    flag = 1;
                    queensPlaced++;
                    break;
                }
            }
            if (flag)
                break;
        }

        if (flag) // Queen has been placed
        {
            b.blockPlaces(i, j);
        }
        else
        {
            b.displayBoard();
            break;
        }
    }
}

#endif