#include <iostream> //For std::cout, std::cin, std::endl

using namespace std; //So that we don't have to write std:: before cout, cin and endl

//Function for printing board
void printBoard(char board[10][10])
{
    //Provides keys for what each character represents on the board
    cout << endl << "YOUR BOARD" << endl;
    cout << "o = Empty Space" << endl;
    cout << "+ = Ship" << endl;
    cout << "x = Broken Ship" << endl << endl;

    //Prints out the entire board
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cout << board[i][j] << "  ";
        }

        cout << endl;
    }

    //Asks for the user to press enter to advance
    cout << "(PRESS ENTER TO CONTINUE)" << endl;
    cin.ignore();
}
