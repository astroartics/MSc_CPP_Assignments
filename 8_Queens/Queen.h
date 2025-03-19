#include <bits/stdc++.h>
#include "Board.h"
#ifndef __Board_h_
#define __Board_h_

class Queen
{
public:
    int queensPlaced, initialRow, initialCol;
    Board b;
    int Queens[BOARDSIZE];

    Queen()
    {
        queensPlaced = 0;
        initialRow = 0;
        initialCol = 0;

        for (int i = 0; i < BOARDSIZE; i++)
        {
            Queens[i] = -1;
        }
    }

    void firstQueen(int, int);
    void placeQueens();
    bool isUnderAttack(int, int);
    void displayQueenPositions();
    void movePreviousQueen();
    void revertBlockedPlaces(int, int);
    void nextFreePos(int, int);
};

#endif