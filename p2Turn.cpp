#include <iostream> //For std::cout, std::cin, std::endl
#include <stdlib.h> //For srand() and rand()
#include <time.h> //For time

using namespace std; //So that we don't have to write std:: before cout, cin and endl

//Forward declarations for needed functions from other files
void printBoard(char board[10][10]);
void printStats(char board1[10][10], char board2[10][10]);
void turns(char board1[10][10], char board2[10][10]);

//Function for player's turn
void p2Turn(char board1[10][10], char board2[10][10]){
    //Set random seed
    srand(time(NULL));

    //Get a random row and column
    int row = rand() % 10;
    int col = rand() % 10;

    //Print the opponent's coordinate choice
    cout << "Opponent chose : " << row << ", " << col;

    //If there isn't a ship in the space, notify player and ask player to press enter to advance
    if(board1[row][col] == 'o'){
        cout << endl << "There is no ship here! (PRESS ENTER TO CONTINUE)" << endl;
        cin.ignore();

    //If there is a ship in the space, notify the player, change the coordinate's value to a destroyed ship and ask player to press enter to advance
    }else if(board1[row][col] == '+'){
        cout << "You hit a ship!!! (PRESS ENTER TO CONTINUE)" << endl;
        board1[row][col] = 'x';
        cin.ignore();

    //If there is a broken ship in the space, notify the player and ask player to press enter to advance
    }else if(board1[row][col] == 'x'){
        cout << "That ship has already been attacked! (PRESS ENTER TO CONTINUE)" << endl;
        cin.ignore();
    }

    //print the player's board
    printBoard(board1);

    //Print the stats for both player and opponent
    printStats(board1, board2);

    //Alternate turns (turn for player)
    turns(board1, board2);
}
