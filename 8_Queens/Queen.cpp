#include "Queen.h"

using namespace std;

void Queen::firstQueen(int iRow, int iCol)
{
    initialRow = iRow;
    initialCol = iCol;

    b.board[initialRow][initialCol] = 'Q';
    b.blockPlaces(initialRow, initialCol);
    queensPlaced = 1;

    Queens[iRow] = iCol;
}

void Queen::placeQueens()
{
    int flag = 0, i = 0, j = 0;

    while (queensPlaced != BOARDSIZE)
    {
        flag = 0, i = 0, j = 0;

        for (i = 0; i < BOARDSIZE; i++)
        {
            for (j = 0; j < BOARDSIZE; j++)
            {
                if (!isUnderAttack(i, j))
                {
                    flag = 1;
                    Queens[i] = j;
                    break;
                }
                else
                {
                    flag = 0;
                    if (j == (BOARDSIZE - 1))
                    {
                        break;
                    }
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
            displayQueenPositions();
            movePreviousQueen();
            b.displayBoard();
            break;
        }
    }
}

bool Queen::isUnderAttack(int i, int j)
{
    if (b.board[i][j] == '-')
    {
        b.board[i][j] = 'Q';
        queensPlaced++;
        return false;
    }
    return true;
}

void Queen::displayQueenPositions()
{
    for (int i = 0; i < BOARDSIZE; i++)
    {
        cout << "Row : " << i << "\tCol : " << Queens[i] << endl;
    }
    cout << "\n\nQueens placed : " << queensPlaced << endl;
}

void Queen::movePreviousQueen()
{
    if (queensPlaced != BOARDSIZE)
    {
        cout << "Queen to be moved : " << queensPlaced << endl;
    }
}