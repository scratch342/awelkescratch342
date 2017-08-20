#include <iostream> //For std::cout, std::cin, std::endl

using namespace std; //So that we don't have to write std:: before cout, cin and endl

//Forward declarations for needed functions from other files
void printBoard(char board[10][10]);
void printStats(char board1[10][10], char board2[10][10]);
void turns(char board1[10][10], char board2[10][10]);

//Function for player's turn
void p1Turn(char board1[10][10], char board2[10][10]){

    //Asks for the row in which the player would like to attack
    cout << "Enter the row of the space you would like to attack (1 - 10) : ";
    int row;
    cin >> row;
    cin.sync();

    //Asks for the column in which the player would like to attack
    cout << "Enter the column of the space you would like to attack (1 - 10) : ";
    int col;
    cin >> col;
    cin.sync();

    //If there isn't a ship in the space, notify player and ask player to press enter to advance
    if(board2[row-1][col-1] == 'o'){
        cout << endl << "There is no ship here! (PRESS ENTER TO CONTINUE)" << endl;
        cin.ignore();

    //If there is a ship in the space, notify the player, change the coordinate's value to a destroyed ship and ask player to press enter to advance
    }else if(board2[row-1][col-1] == '+'){
        cout << "You hit a ship!!! (PRESS ENTER TO CONTINUE)" << endl;
        board2[row-1][col-1] = 'x';
        cin.ignore();

    //If there is a broken ship in the space, notify the player and ask player to press enter to advance
    }else if(board2[row-1][col-1] == 'x'){
        cout << "That ship has already been attacked! (PRESS ENTER TO CONTINUE)" << endl;
        cin.ignore();
    }

    //print the player's board
    printBoard(board1);

    //Print the stats for both player and opponent
    printStats(board1, board2);

    //Alternate turns (turn for opponent)
    turns(board1, board2);
}
