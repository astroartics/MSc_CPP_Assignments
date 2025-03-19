#include "Board.h"

using namespace std;

void Board::displayBoard()
{
    for (int i = 0; i < BOARDSIZE; i++)
    {
        for (int j = 0; j < BOARDSIZE; j++)
        {
            board[i][j] == 'Q' ? std::cout << "\033[33m" << board[i][j] << " \033[0m" : std::cout << board[i][j] << " ";
        }
        std::cout << std::endl;
    }
}