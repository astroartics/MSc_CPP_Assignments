#include <bits/stdc++.h>

class Queen
{
public:
    int queensPlaced;

    Queen()
    {
        queensPlaced = 0;
    }

    void placeQueen(int, int);

    friend class Board;
};