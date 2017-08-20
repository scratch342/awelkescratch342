#include <iostream> //For std::cout, std::cin, std::endl
#include <stdlib.h> //For srand() and rand()
#include <time.h> //For time

using namespace std; //So that we don't have to write std:: before cout, cin and endl

//Forward declarations of functions from other files
void printBoard(char board[10][10]);
void printStats(char board1[10][10], char board2[10][10]);
void turns(char board1[10][10], char board2[10][10]);
void placeShips(char board[10][10]);
void p1Turn(char board1[10][10], char board2[10][10]);
void p2Turn(char board1[10][10], char board2[10][10]);

int main()
{
    //Create board for player
    char board1[10][10];

    //Create board for opponent
    char board2[10][10];

    //Assign all of the elements of both boards to the character 'o'
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            board1[i][j] = 'o';
            board2[i][j] = 'o';
        }
    }

    //Set the seed to the time
    srand(time(NULL));


    placeShips(board1); //call function for placing ships in board for player
    placeShips(board2); //call function for placing ships in board for opponent
    printBoard(board1); //print the player's board
    printStats(board1, board2); //Print the stats for both player and opponent
    turns(board1, board2); //Begin the game
    return 0;
}
