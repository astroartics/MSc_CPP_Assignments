#include <bits/stdc++.h>

class Queen
{
public:
    int queens[8];

    Queen()
    {
        for (int i = 0; i < 8; i++)
        {
            queens[i] = -1;
        }
    }

    void hello();
    bool isUnderAttack();
};