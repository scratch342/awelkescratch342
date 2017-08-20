#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void printBoard(char board[10][10]);
void printStats(char board1[10][10], char board2[10][10]);
void turns(char board1[10][10], char board2[10][10]);

void p2Turn(char board1[10][10], char board2[10][10]){
    srand(time(NULL));

    int row = rand() % 10;
    int col = rand() % 10;

    cout << "Opponent chose : " << row << ", " << col;

    if(board1[row][col] == 'o'){
        cout << endl << "There is no ship here! (PRESS ENTER TO CONTINUE)" << endl;
        cin.ignore();
    }else if(board1[row][col] == '+'){
        cout << "You hit a ship!!! (PRESS ENTER TO CONTINUE)" << endl;
        board1[row][col] = 'x';
        cin.ignore();
    }else if(board1[row][col] == 'x'){
        cout << "That ship has already been attacked! (PRESS ENTER TO CONTINUE)" << endl;
        cin.ignore();
    }

    printBoard(board1);
    printStats(board1, board2);
    turns(board1, board2);
}
