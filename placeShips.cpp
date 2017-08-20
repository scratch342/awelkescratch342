#include <stdlib.h>

void placeShips(char board[10][10])
{

    int s1X = rand() % 10;
    int s2X = rand() % 10;
    int s3X = rand() % 10;
    int s4X = rand() % 10;
    int s5X = rand() % 10;

    int s1Y = rand() % 10;
    int s2Y = rand() % 10;
    int s3Y = rand() % 10;
    int s4Y = rand() % 10;
    int s5Y = rand() % 10;



    board[s1X][s1Y] = '+';
    board[s2X][s2Y] = '+';
    board[s3X][s3Y] = '+';
    board[s4X][s4Y] = '+';
    board[s5X][s5Y] = '+';

}


