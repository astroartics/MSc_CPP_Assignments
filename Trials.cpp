/*
void Board::blockPlaces(int currRow, int currCol, char c)
{
    for (int i = 0; i < BOARDSIZE; i++)
    {
        if (i != currCol)
            board[currRow][i] = c;
    }
    for (int i = 0; i < BOARDSIZE; i++)
    {
        if (i != currRow)
            board[i][currCol] = c;
    }

    int m = currRow;
    int n = currCol;
    while (!(m <= 0) && !(n <= 0))
    {
        board[m - 1][n - 1] = c;
        m--;
        n--;
    }

    n = currCol;
    int p = currRow;
    while (!(p >= BOARDSIZE - 1) && !(n <= 0))
    {
        board[p + 1][n - 1] = c;
        p++;
        n--;
    }

    m = currRow;
    n = currCol;
    while (!(m <= 0) && !(n >= BOARDSIZE - 1))
    {
        board[m - 1][n + 1] = c;
        m--;
        n++;
    }

    n = currCol;
    p = currRow;
    while (!(n >= BOARDSIZE - 1) && !(p >= BOARDSIZE - 1))
    {
        board[p + 1][n + 1] = c;
        p++;
        n++;
    }
}




    // Right lower diagonal
    // for (int i = r, j = c; i < BOARDSIZE && j < BOARDSIZE; i++, j++)
    // {
    //     if (b.board[i][j] == 'Q')
    //         return true;
    // }

    // // Left lower diagonal
    // for (int i = r, j = c; i < BOARDSIZE && j >= 0; i++, j--)
    // {
    //     if (b.board[i][j] == 'Q')
    //         return true;
    // }





// void Queen::addQueen(int iRow, int iCol)
// {
//     initialRow = iRow;
//     initialCol = iCol;

//     b.board[iRow][iCol] = 'Q';
//     b.blockPlaces(iRow, iCol, 'X');
//     queensPlaced++;

//     Queens[iRow] = iCol;
// }

// void Queen::placeQueens()
// {
//     int flag = 0, i = 0, j = 0;

//     while (queensPlaced != BOARDSIZE)
//     {
//         flag = 0, i = 0, j = 0;

//         for (i = 0; i < BOARDSIZE; i++)
//         {
//             for (j = 0; j < BOARDSIZE; j++)
//             {
//                 if (!isUnderAttack(i, j))
//                 {
//                     flag = 1;
//                     addQueen(i, j);
//                     break;
//                 }
//                 else
//                 {
//                     flag = 0;
//                 }
//             }
//             if (flag)
//                 break;
//         }

//         if (!flag) // Queen has not been placed
//         {
//             cout << "\n\n\n";
//             b.displayBoard();
//             displayQueenPositions();
//             revertBlockedPlaces(queensPlaced - 1, Queens[queensPlaced - 1], 4);
//         }
//     }

//     cout << "Queens placed : " << queensPlaced << endl;
// }

// void Queen::displayQueenPositions()
// {
//     for (int i = 0; i < BOARDSIZE; i++)
//     {
//         cout << "Row : " << i << "\tCol : " << Queens[i] << endl;
//     }
//     cout << "\n\nQueens placed : " << queensPlaced << endl;
// }

// void Queen::revertBlockedPlaces(int qRow, int qCol, int rollBackTill)
// {
//     if (queensPlaced == BOARDSIZE)
//         return;

//     int flag = 0, i = 0, j = 0;

//     b.blockPlaces(qRow, qCol, '-');
//     b.board[qRow][qCol] = '-';
//     cout << "\n\n\n";
//     queensPlaced--;

//     for (i = 0; i < BOARDSIZE; i++)
//     {
//         for (j = 0; j < BOARDSIZE; j++)
//         {
//             if (b.board[i][j] == 'Q')
//             {
//                 flag = 1;
//                 break;
//             }
//             else
//                 flag = 0;
//         }
//         if (flag)
//             b.blockPlaces(i, j, 'X');
//     }

//     nextFreePos(qRow, qCol);
//     b.displayBoard();

//     revertBlockedPlaces(qRow - 1, qCol - 1, 4);
// }

// void Queen::nextFreePos(int currRow, int currCol)
// {
//     int flag = 0;

//     for (int i = currCol + 1; i < BOARDSIZE; i++)
//     {
//         if (b.board[currRow][i] == '-')
//         {
//             addQueen(currRow, i);
//             flag = 1;
//             break;
//         }
//         else
//             flag = 0;
//     }

//     if (flag)
//         placeQueens();
// }

*/