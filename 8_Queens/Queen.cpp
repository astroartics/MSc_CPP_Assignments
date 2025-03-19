#include "Queen.h"

using namespace std;

void Queen::firstQueen(int iRow, int iCol)
{
    initialRow = iRow;
    initialCol = iCol;

    b.board[iRow][iCol] = 'Q';
    b.blockPlaces(iRow, iCol, 'X');
    queensPlaced++;

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
                }
            }
            if (flag)
                break;
        }

        if (flag) // Queen has been placed
        {
            b.blockPlaces(i, j, 'X');
        }
        else
        {
            // displayQueenPositions();
            cout << "\n\n\n";
            b.displayBoard();
            revertBlockedPlaces(queensPlaced - 1, Queens[queensPlaced - 1]);
            break;
        }
    }

    cout << "Queens placed : " << queensPlaced << endl;
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

void Queen::revertBlockedPlaces(int qRow, int qCol)
{
    if (queensPlaced != BOARDSIZE)
    {
        int flag = 0, i = 0, j = 0;

        b.blockPlaces(qRow, qCol, '-');
        b.board[qRow][qCol] = '-';
        cout << "\n\n\n";
        queensPlaced--;

        for (i = 0; i < BOARDSIZE; i++)
        {
            for (j = 0; j < BOARDSIZE; j++)
            {
                if (b.board[i][j] == 'Q')
                {
                    flag = 1;
                    break;
                }
                else
                    flag = 0;
            }
            if (flag)
                b.blockPlaces(i, j, 'X');
        }

        nextFreePos(qRow, qCol);
        b.displayBoard();
    }
}

void Queen::nextFreePos(int currRow, int currCol)
{
    int flag = 0, i = 0;

    for (i = currCol + 1; i < BOARDSIZE; i++)
    {
        if (b.board[currRow][i] == '-')
        {
            firstQueen(currRow, i);
            flag = 1;
            break;
        }
        else
            flag = 0;
    }

    if (flag)
        placeQueens();

    // return -1;
}