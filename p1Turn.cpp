#include <iostream>

using namespace std;

void printBoard(char board[10][10]);
void printStats(char board1[10][10], char board2[10][10]);
void turns(char board1[10][10], char board2[10][10]);

void p1Turn(char board1[10][10], char board2[10][10]){
    cout << "Enter the row of the ship you would like to attack (1 - 10) : ";
    int row;
    cin >> row;
    cin.sync();

    cout << "Enter the column of the ship you would like to attack (1 - 10) : ";
    int col;
    cin >> col;
    cin.sync();

    if(board2[row-1][col-1] == 'o'){
        cout << endl << "There is no ship here! (PRESS ENTER TO CONTINUE)" << endl;
        cin.ignore();
    }else if(board2[row-1][col-1] == '+'){
        cout << "You hit a ship!!! (PRESS ENTER TO CONTINUE)" << endl;
        board2[row-1][col-1] = 'x';
        cin.ignore();
    }else if(board2[row-1][col-1] == 'x'){
        cout << "That ship has already been attacked! (PRESS ENTER TO CONTINUE)" << endl;
        cin.ignore();
    }

    printBoard(board1);
    printStats(board1, board2);
    turns(board1, board2);
}
