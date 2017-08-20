#include <iostream> //For std::cout, std::cin, std::endl
#include <unistd.h> //For sleep()
#include <cstdlib> //For exit()

using namespace std; //So that we don't have to write std:: before cout, cin and endl

//Function for printing statistics
void printStats(char board1[10][10], char board2[10][10]){

    //Create variables for holding amount of ships player has and amount of ships destroyed
    int shipsLeft1 = 0;
    int shipsHit1 = 0;

    //Create variables for holding amount of ships opponent has and amount of ships destroyed
    int shipsLeft2 = 0;
    int shipsHit2 = 0;

    //Loop through and check for ships and destroyed ships
    //If a ship is found for player or opponent, the corresponding variable will be incremented
    //If a destroyed ship is found for player or opponent, the corresponding variable will be incremented
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(board1[i][j] == '+'){
                shipsLeft1++;
            }else if(board1[i][j] == 'x'){
                shipsHit1++;
            }

            if(board2[i][j] == '+'){
                shipsLeft2++;
            }else if(board2[i][j] == 'x'){
                shipsHit2++;
            }

        }

    }

    //If all ships have been destroyed for player, print the opponent wins and vice versa. Then end program
    if(shipsLeft1 <= 0){
        cout << "Opponent WINS!!!" << endl;
        sleep(2);
        exit(0);
    }else if(shipsLeft2 <= 0){
        cout << "Player WINS!!!" << endl;
        sleep(2);
        exit(0);
    }

    //Print out all statistics for player and opponent :
    //Ships left
    //Ships that have been destroyed
    cout << endl << "Player : " << endl;
    cout << "\t Ships Left = " << shipsLeft1 << endl;
    cout << "\t Ships that have been hit = " << shipsHit1 << endl << endl;

    cout << endl << "Opponent : " << endl;
    cout << "\t Ships Left = " << shipsLeft2 << endl;
    cout << "\t Ships that have been hit = " << shipsHit2 << endl << endl;

    //Asks user to press enter in order to advance
    cout << "(PRESS ENTER TO CONTINUE)" << endl;
    cin.ignore();
}
