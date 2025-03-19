#include <bits/stdc++.h>
#include "Board.h"
#ifndef __Board_h_
#define __Board_h_

class Queen
{
public:
    int queensPlaced;
    Board b;

    Queen()
    {
        queensPlaced = 0;
    }

    bool placeQueens(int);
    bool isUnderAttack(int, int);
};

#endif